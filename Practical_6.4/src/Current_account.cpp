#include "Current_account.h"
#include <iostream>
#include<string>

using namespace std;
Current_account::Current_account()
{
    //ctor
}

Current_account::Current_account(long double account_number, long double current_balance,double limit):Base_account(account_number,current_balance)
{
    overdraft_limit = limit;
}

void Current_account::withdraw(double amount)
{
    if(amount <= current_balance + overdraft_limit)
    {
        current_balance-=amount;
    }
    else
    {
        cout<< "Overdraft limit exceeded!\n";
    }
}

void Current_account::deposite(double amount)
{
    Base_account::deposite(amount);
}

void Current_account::display()
{
    Base_account::display();
    cout<<"Account Type : Current\n";
    cout<<"Overdraft Limit: "<< overdraft_limit <<endl;
}
