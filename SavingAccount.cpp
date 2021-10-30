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

SavingAccount::SavingAccount(string acctNum, double b, double i): BankAccount(acct)