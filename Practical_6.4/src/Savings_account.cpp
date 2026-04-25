#include "Savings_account.h"
#include <iostream>
#include <string>

using namespace std;
Savings_account::Savings_account()
{
    //ctor
}

Savings_account::Savings_account(long double account_number,long double current_balance,float interest_rate) : Base_account(account_number,current_balance)
{
    this->interest_rate = interest_rate;
}

void Savings_account::deposite(double amount)
{
    Base_account::deposite(amount);
}

void Savings_account::withdraw(double amount)
{
    Base_account::withdraw(amount);
}

void Savings_account::add_interest()
{
    double interest = current_balance*interest_rate / 100;
    current_balance+=interest;
}

void Savings_account::display()
{
    Base_account::display();
    cout<<"Account type : Savings\n";
    cout<<"Interest Rate : "<<interest_rate<<"%\n";
}
