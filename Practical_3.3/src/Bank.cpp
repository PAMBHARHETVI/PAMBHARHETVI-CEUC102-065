#include "Bank.h"
#include<iostream>
#include<string>
using namespace std;

int Bank::acc_num=1;
Bank::Bank()
{
    //ctor
}
void Bank::create_acc()
{

    cout<<"Your deposite money : ";
    cin>>balance;

    cout<<"Your Account has been created successfull.\n";
    cout<<"\nYour Account number : "<<acc_num<<endl;
    acc_num++;
}

int Bank::check_acc(int no)
{
    if(acc_num==no)
    {
        return 1;
    }
}
void Bank::withdraw_money(float n)
{
    balance-=n;
}
void Bank::deposite_money(float n)
{
    balance+=n;
}
