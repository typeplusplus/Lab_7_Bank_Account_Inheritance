#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>

using namespace std;

class BankAccount
{
    public:
        //Constructor
        BankAccount();
        BankAccount(string, double);
        //Accessors
        double get_balance() const;
        string get_accountNum() const;
        void display_balance() const;

        //Mutators
        void set_accountNum(string n);
        void set_balance(double a);

        //Member functions
        void deposit(double amount);
        void withdraw(double amount);

        //Operators overloading
        friend ostream& operator <<(ostream& out, BankAccount a);

    private:
        //Member Data
        double balance;
        string accountNum;

};

#endif