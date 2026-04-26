#include "BankAccount.h"
#include <iostream>
using namespace std;
BankAccount::BankAccount()
{
    //ctor
}

BankAccount::BankAccount(double b)
{
    balance=b;
}

void BankAccount::deposite(double amount)
{
    if (amount <= 0)
            throw "Invalid deposit amount!";

        balance += amount;
        cout << "Deposit successful\n";
}

void BankAccount::withdraw(double amount)
{
    if (amount > balance)
            throw "Insufficient balance!";

        balance -= amount;
        cout << "Withdraw successful\n";
}

void BankAccount::showBalance()
{
    cout<<"Current Balance = "<<balance<<endl;
}
