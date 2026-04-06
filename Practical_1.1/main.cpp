#include <iostream>
#include "wallet.h"
using namespace std;

int main()
{
    int ch,x=0,ID,i,j;
    Wallet u[50];
    r1:
        cout<<"\n1.Add User \n2.Load Money\n3.Transfer Money\n4.Current Balance\n5.Exit\nEnter Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            u[x].addUser(x);
            x++;
            goto r1;
        case 2:
            cout<<"Enter UID : ";
            cin>> ID;
            for(i=0 ; i<x ; i++)
            {
                if(u[i].searchUser(ID)=='y')
                {
                    {
                        u[i].loadMoney();
                        break;
                    }
                }
            }
            if(i==x)
            {
                cout<<"\nAccount not found!\n";
            }
            goto r1;
        case 3:
            cout<<"Enter Sender ID : ";
            cin>>ID;

            for(i=0 ; i<x ; i++)
            {
                if(u[i].searchUser(ID)=='y')
                {
                    cout<<"Enter Reciever ID :  ";
                    cin>>ID;
                    for(j=0 ; j<x ;j++)
                    {
                        if(u[j].searchUser(ID)=='y')
                        {
                            u[i].transferMoney(u[j]);
                            break;
                        }
                    }
                    if(j==x)
                    {
                        cout<<"\nReciever account not found!\n";
                    }
                    break;
                }
            }
            if(i==x)
            {
                        cout<<"\nSender Account not found!\n";
            }
            goto r1;
        case 4:
            cout<<"Enter ID : ";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(u[i].searchUser(ID)=='y')
				{
					u[i].viewBalance();
					break;
				}

			}
			if(i==x)
			{
				cout<<"\nAccount not found\n";
			}
			goto r1;
		case 5:
			cout<<endl<<"......Exiting......";
			cout<<endl<<"............................................................."<<endl;
			cout<<"ID\t:\t25CE065"<<endl<<"Name\t:\tPambhar Hetvi Chandreshbhai";
			cout<<endl<<"............................................................."<<endl;
			return 0;
		default:
			cout<<endl<<"Invalid Entry!"<<endl;
			break;
	}



    return 0;
}
