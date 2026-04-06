#include "account.h"
#include<iostream>
using namespace std;

account::account()
{
    //ctor
}
void account::createAccount(int x,account *a)
{
	int i;
	r2:
	cout<<"\nEnter UID : ";
	cin>>UID;
	for(i=0;i<x;i++)
	{
		if(a[i].searchUser(UID)=='y')
		{
			cout<<"\nDuplicate ID found!\n";
			goto r2;
		}
	}
	getchar();
	cout<<"Enter User Name : ";
	cin.getline(name,30);
	cout<<"Enter Initial Balance : ";
	cin>>balance;
}

void account::withdraw()
{
	float amt;
	cout<<"Enter withdrawal amount : ";
	cin>>amt;
	if(balance>=amt)
    {
        balance-=amt;
    }
    else
        cout<<"Insufficient balance";

}

void account::deposit()
{
	float amt;
	cout<<"Enter deposit amount : ";
	cin>>amt;
	balance+=amt;
}

void account::display()
{
	cout<<"\nUID : "<<UID<<"\nUser Name : "<<name<<"\nCurrent Balance : "<<balance<<endl;
}

char account::searchUser(long int ID)
{
	if(ID == UID)
		return 'y';
	return 'n';
}
