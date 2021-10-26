#include <iostream>
#include <string>
#include <vector>

#include "printmefirst.h"
//#include "SavingsAccount.h"
//#include "CheckingAccount.h"
#include "BankAccount.h"

using namespace std;

int main()
{
    printmefirst("Reece Doyle", "CS-116: Lab 7 - Inheritance cont.");

    double amount;

    BankAccount Reece("S1001", 3000);

    Reece.display_balance();

    cout << "Account: " << Reece.get_accountNum() << endl;
    cout << "Balance: " << Reece.get_balance() << endl;

    Reece.set_accountNum("C1003");
    cout << "New Account Name: " << Reece.get_accountNum() << endl;

    Reece.deposit(3000);
    Reece.withdraw(1000);

    Reece.display_balance();

/*
    Create accounts
    vector<BankAccount>myAccount;
    BankAccount acct1;
    BankAccount acct2("S1002", 3000);
    CheckingAccount myChecking;
    SavingsAccount mySaving ("S1001", 2500, 1.25);

    cout << fixed << setprecision(2);
    mySaving.set_account_number ("S1001");
    mySaving.display_balance();
    acct1.set_account_number("S1001");
    acct2.set_account_number("S1002");
    acct1.deposit(2000);
    
    //Add my accounts to the declared vector
    myAccount.push_back(acct1);
    myAccount.push_back(acct2);
    for(unsigned int n = 0; n < myAccount.size(); n++)
    {
        myAccount[n].display_balance();
    }

    //Withdraw from account acctNum
    string acctNum = "S1002";
    double withdrawAmt = 200;
    for(unsigned int n = 0; n < myAccount.size(); n++)
    {
        myAccount[n].display_balance();

        if(myAccount[n].get_account_number() == acctnum)
        {
            cout << "Withdraw $" << withdrawAmt << "from account" << acctnum << endl;
            myAccount[n].withdraw(withdrawAmt);
            myAccount[n].display_balance();
        }
    }

    myChecking.set_account_number("C1001");
    amount = 4500;
    cout << "Account: " << myChecking.get_account_number() << ": Deposit" << amount << endl;
    myChecking.deposit(amount);
    myChecking.display_balance();

    amount = 150;
    cout << "Account: " << myChecking.get_account_number() << ": Deposit" << amount << endl;
    myChecking.deposit(amount);
    myChecking.display_balance();

    amount = 100;
    cout << "Account: " << myChecking.get_account_number() << ": Withdraw" << amount << endl;
    myChecking.withdraw(amount);
    myChecking.display_balance();

    amount = 550;
    cout << "Account: " << myChecking.get_account_number() << ": Withdraw" << amount << endl;
    myChecking.withdraw(amount);
    myChecking.display_balance();

    cout << "\nSaving account month end\n";
    mySaving.display_balance();
    mySaving.month_end();
    mySaving.display_balance();

    amount = 4000;
    cout << "Account: " << mySaving.get_account_number() << ": Withdraw" << amount << endl;
    mySaving.withdraw(amount);
    mySaving.display_balance();

    return 0;
*/
}