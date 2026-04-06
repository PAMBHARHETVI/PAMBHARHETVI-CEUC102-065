#include <iostream>
#include "account.h"

using namespace std;

int main()
{
    int c,x=0,i;
	long int ID;
	account a[30];
	r1:
	cout<<"\n1-Create Account\n2-Withdraw\n3-Deposit\n4-Display Summery\n0-Exit\nEnter Choice : ";
	cin>>c;
	switch(c)
	{
		case 1:
			a[x].createAccount(x,a);
			x++;
			goto r1;
		case 2:
			cout<<"Enter ID : ";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(a[i].searchUser(ID)=='y')
				{
					a[i].withdraw();
					break;
				}
			}
			if(i==x)
			{
				cout<<"\nAccount not found!\n";
			}
			goto r1;
		case 3:
			cout<<"Enter ID : ";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(a[i].searchUser(ID)=='y')
				{
					a[i].deposit();
					break;
				}
			}
			if(i==x)
			{
				cout<<"\nAccount not found!\n";
			}
			goto r1;
		case 4:
			cout<<"Enter ID : ";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(a[i].searchUser(ID)=='y')
				{
					a[i].display();
					break;
				}
			}
			if(i==x)
			{
				cout<<"\nAccount not found!\n";
			}
			goto r1;
		case 0:
			cout<<"\n......Exiting......\n";
			cout<<endl<<"............................................................."<<endl;
			cout<<"ID\t:\t25CE065"<<endl<<"Name\t:\tPambhar Hetvi Chandreshbhai";
			cout<<endl<<"............................................................."<<endl;
			return 0;
		default:
			cout<<"\nInvalid Choice!\n";
			goto r1;
	}

    return 0;
}
