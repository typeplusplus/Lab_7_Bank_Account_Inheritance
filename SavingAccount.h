#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include <iostream>

#include "BankAccount.h"

using namespace std;

class SavingAccount : public BankAccount
{
    public:
        //Constructors
        SavingAccount();
        SavingAccount(string acctNum, double b, double i);

        //Mutator
        void withdraw(double amount);
        void setInterestRate(double rate);
        void displaybalance() const;
        void monthEnd();

        //Accessors
        double getInterestRate();

        //Operator
        friend ostream& operator <<(ostream& out, BankAccount a);

    private:
        //Member Data
        double interest_rate;
        double min_balance;
};

#endif