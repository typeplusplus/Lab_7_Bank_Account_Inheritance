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

void BankAccount::display_balance()
{
    cout << "\nAccount Number: " << this->accountNum;
    cout << " Current Balance: $" << fixed << setprecision(2) << this->balance;
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

const bool operator ==(const BankAccount & value1, const BankAccount & value2)
{
    string account1 = value1.get_accountNum();
    string account2 = value2.get_accountNum();

    if(account1 == account2)
    {
        return true;
    }
    else
        return false;
}