#include <iostream>
#include <iomanip>

#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount()
{
    accountNum = "NA";
    balance = 0;
}

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
    cout << "Account Number: " << this->accountNum << endl;
    cout << "Current Balance: $" << fixed << setprecision(2) << this->balance << endl;
}

void BankAccount::set_accountNum(string n)
{
    accountNum = n;
}

void BankAccount::set_balance(double a)
{
    balance = a;
}

void BankAccount::deposit(double amount)
{
    balance = balance + amount;
    cout << "New Balance after Deposit: " << balance << endl;
}

void BankAccount::withdraw(double amount)
{
    if(balance >= amount)
    {
        balance = balance - amount;
        
        cout << fixed << setprecision(2);

        cout << "Amount being withdrawn: $" << amount << endl
             << "New Balance after Withdrawal: $" << balance << endl;
    }
    else

        cout << "Insufficient Balance" << endl;
}

ostream& operator <<(ostream& out, BankAccount a)
{
    out << a.get_balance() << a.get_accountNum();
    
    return out;
}