#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include <iostream>

#include "BankAccount.h"

class CheckingAccount : public BankAccount
{
    public:
        CheckingAccount();
        CheckingAccount(string acctNum, double b);

        void withdraw(double amount);
        void deposit(double amount);

    private:
        int Transactions;
        void CheckForFee();

};

#endif