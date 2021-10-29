#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include <iostream>

#include "BankAccount.h"

class CheckingAccount : public BankAccount
{
    public:
        //Constructors
        CheckingAccount();
        CheckingAccount(string acctNum, double b);

        //Mutators
        void withdraw(double amount);
        void deposit(double amount);
        void monthEnd();

    private:
        //Member Data
        int Transactions;
        void CheckForFee();

};

#endif