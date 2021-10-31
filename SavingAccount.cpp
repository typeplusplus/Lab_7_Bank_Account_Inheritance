#include <iostream>
#include <iomanip>
#include <string>

#include "SavingAccount.h"


using namespace std;

SavingAccount::SavingAccount()
{
    interest_rate = 0;
    min_balance = 0;
}

SavingAccount::SavingAccount(string acctNum, double b, double i): BankAccount(acctNum, b)
{
    BankAccount(acctNum, b);

    min_balance = b;

    interest_rate = i;
}

void SavingAccount::withdraw(double amount)
{
    BankAccount::withdraw(amount);

    if (get_balance() < this->min_balance)
    {
        min_balance = BankAccount::get_balance();
    }
}

void SavingAccount::setInterestRate(double rate)
{
    interest_rate = rate;
}

void SavingAccount::display_balance()
{
    cout << "Savings Account " << get_accountNum() << " Interest Rate: " << interest_rate << endl;
    
    BankAccount::display_balance();
}

double SavingAccount::getInterestRate()
{
    return interest_rate;
}

void SavingAccount::monthEnd()
{
    double interest_earned = min_balance * interest_rate/100;

    deposit(interest_earned);

    min_balance = get_balance();
}