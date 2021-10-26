#include <iostream>

#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount(string acct, double a)
{
    accountNum = acct;
    balance = a;
}

double BankAccount::get_balance() const
{
    return balance;
}

string BankAccount::get_accountNum() const
{
    return accountNum;
}

void BankAccount::display_balance() const
{
    cout << "Account Number: " << accountNum << endl;
    cout << "Current Balance: " << balance << endl;
}

void BankAccount::set_accountNum(string n)
{
    accountNum = n;
}

void BankAccount::deposit(double amount)
{
    balance = balance + amount;
    cout << "New Balance after Deposit: " << balance << endl;
}

void BankAccount::withdraw(double amount)
{
    balance = balance - amount;
    cout << "New Balance after Withdrawal: " << balance << endl;
    //Need to write check amount validity
}

ostream& operator <<(ostream& out, BankAccount a)
{
    out << a.get_balance() << a.get_accountNum();
    
    return out;
}