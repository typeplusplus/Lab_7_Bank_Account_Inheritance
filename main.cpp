//http://www.cplusplus.com/forum/beginner/210719/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "printmefirst.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "BankAccount.h"

using namespace std;

int main()
{
    printmefirst("Reece Doyle", "CS-116: Lab 7 - Inheritance cont.");
    double amount;

    //Create accounts
    vector<BankAccount>myAccount;
    BankAccount acct1;
    BankAccount acct2("S1002", 3000);
    CheckingAccount myChecking;
    SavingAccount mySaving ("S1001", 2500, 1.25);

    cout << fixed << setprecision(2);
    mySaving.set_accountNum ("S1001");
    mySaving.display_balance();
    acct1.set_accountNum("S1000");
    acct2.set_accountNum("S1002");
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
        if(myAccount[n].get_accountNum() == acctNum)
        {
            cout << "Withdraw $" << withdrawAmt << " from account " << acctNum << endl;
            myAccount[n].withdraw(withdrawAmt);
            myAccount[n].display_balance();
        }
    }

    myChecking.set_accountNum("C1001");
    amount = 4500;
    cout << "Account: " << myChecking.get_accountNum() << ": Deposit $" << amount << endl;
    myChecking.deposit(amount);
    myChecking.display_balance();
/*
    amount = 150;
    cout << "Account: " << myChecking.get_accountNum() << ": Deposit $" << amount << endl;
    myChecking.deposit(amount);
    myChecking.display_balance();
*/
/*
    amount = 100;
    cout << "Account: " << myChecking.get_accountNum() << ": Withdraw $" << amount << endl;
    myChecking.withdraw(amount);
    myChecking.display_balance();
*/
/*
    amount = 550;
    cout << "Account: " << myChecking.get_accountNum() << ": Withdraw $" << amount << endl;
    myChecking.withdraw(amount);
    myChecking.display_balance();
*/
/*
    cout << "\nSaving account month end\n";
    mySaving.display_balance();
    mySaving.monthEnd();
    mySaving.display_balance();
*/
/*
    amount = 4000;
    cout << "Account: " << mySaving.get_accountNum() << ": Withdraw $" << amount << endl;
    mySaving.withdraw(amount);
    mySaving.display_balance();
*/
    return 0;
}