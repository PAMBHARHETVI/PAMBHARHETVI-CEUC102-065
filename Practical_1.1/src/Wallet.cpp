#include "Wallet.h"
#include<iostream>
#include "Wallet.h"
using namespace std;
Wallet::Wallet()
{
    //ctor
}

void Wallet::addUser(int x)
{
    int i;
    r2:
        cout<<"\nEnter Wallet Id : ";
        cin>>walletID;
        for(i=0 ; i<x ; i++)
        {
            if(searchUser(walletID)=='y')
            {
                cout<<"\nDuplicate ID Found!\n";
                goto r2;
            }
        }
        getchar();
        cout<<"Enter User Name : ";
        cin.getline(userName,20);
        cout<<"Enter current Balance : ";
        cin>>currentBalance;
}

void Wallet::loadMoney()
{
    int amt;
    cout<<"Enter the amount to load : ";
    cin>>amt;
    currentBalance+=amt;
}

void Wallet::transferMoney(Wallet &u)
{
    int amt;
    cout<<"Enter the amount to be Transfered : ";
    cin>>amt;
    if(amt<=currentBalance)
    {
        currentBalance-=amt;
        u.currentBalance+=amt;
        cout<<"\nAmount successfully transfered.\n";
    }
    else
    {
        cout<<"\nNo Sufficient Balance in Account : "<<walletID<<endl;
    }
}

void Wallet::viewBalance()
{
    cout<<"\nBalance : "<<currentBalance<<endl;
}

char Wallet::searchUser(long int ID)
{
    if(ID==walletID)
        return 'y';
    return 'n';
}
