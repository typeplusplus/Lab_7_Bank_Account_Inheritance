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
    withdraw(amount);

    if (get_balance() < min_balance)
    {
        min_balance = get_balance();
    }
}

void SavingAccount::setInterestRate(double rate)
{
    interest_rate = rate;
}

void SavingAccount::displaybalance() const
{
    display_balance();

    cout << "Interest Rate: " << interest_rate << endl;
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