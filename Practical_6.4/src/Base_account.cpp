#include "Base_account.h"
#include <iostream>
#include <string>

using namespace std;
Base_account::Base_account()
{
    //ctor
}

Base_account::Base_account(long double account_number,long double current_balance)
{
    this->account_number = account_number;
    this->current_balance=current_balance;
}

void Base_account::deposite(double amount)
{
    current_balance+=amount;
}

void Base_account::withdraw(double amount)
{
    if(amount <= current_balance)
    {
        current_balance -= amount;
    }
    else
    {
        cout<<"Insufficient Balance!\n";
    }
}

void Base_account::display()
{
    cout<<"\nAccount Number: "<<account_number;
    cout<<"\nCurrent Balance: "<<current_balance<<endl;
}
