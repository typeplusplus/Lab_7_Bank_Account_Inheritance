#include <iostream>
#include <iomanip>
#include <string>

#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount()
{
    Transactions = 0;
}

CheckingAccount::CheckingAccount(string acct, double b): BankAccount(acct, b)
{
    BankAccount(acct, b);

    Transactions = 0;
}

void CheckingAccount::withdraw(double amount)
{
    BankAccount::withdraw(amount);

    CheckForFee();
}

void CheckingAccount::deposit(double amount)
{
    BankAccount::deposit(amount);

    CheckForFee();
}

void CheckingAccount::CheckForFee()
{
    const int FreeTransactions = 3;
    const int Transaction_Fee = 1;

    Transactions++;

    if (Transactions > FreeTransactions)
    {
        double newBalance = get_balance() - Transaction_Fee;

        set_balance(newBalance);

        cout << "Number of transactions: " 
             << Transactions 
             << " is over the free number of transactions of: "
             << FreeTransactions << endl;
        
        cout << "Deducted: $" << fixed << setprecision(2)
             << Transaction_Fee << " from account\n";    
        
        Transactions = 0;
    }

    else
        cout << "Number of Transactions: " << Transactions << endl;
}