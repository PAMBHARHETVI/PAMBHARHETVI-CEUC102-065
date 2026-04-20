#include <iostream>
#include "Bank.h"
#include<string>

using namespace std;

int main()
{
    int ch,i,R1,R2,n;
    int acc_no1,acc_no2;
    float Balance;

    Bank *B = new Bank[n];
    cout << "Welcome"<< endl;
    x:cout<<"Select option\n";
    cout<<"1. Create account\n2.Tranfer money\n";
    cin>>ch;
    R1=0;
    R2=0;

    switch(ch)
    {
    case 1:
        cout<<"howmany account do you want to create : ";
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            B[i].create_acc();
        }
        goto x;
    case 2:

        cout<<"Your account number : ";
        cin>>acc_no1;
        cout<<"reciver's account number : ";
        cin>>acc_no2;
        for(i=0 ; i<n ; i++)
        {
            R1=B[i].check_acc(acc_no1);
            break;
        }
        if(i==n)
        {
            cout<<"ERROR: account doesn't exist";
            R1=0;
        }
         for(i=0 ; i<n ; i++)
        {
            R2=B[i].check_acc(acc_no2);
            break;
        }
        if(i==n)
        {
            cout<<"ERROR: account doesn't exist";
            R2=0;
        }

        cout<<"Transfer Balance : ";
        cin>>Balance;
        if(R1==R2)
        {
            B[acc_no1].withdraw_money(Balance);
            B[acc_no2].deposite_money(Balance);
        }
        cout<<"Your money transfered successfully.";



    }
    return 0;
}
