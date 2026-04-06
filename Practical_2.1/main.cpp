#include <iostream>
#include "Rectangle.h"
using namespace std;

using namespace std;

int main()
{
    int c,i,x=0,ID;
	Rectangle r[30];
	r1:
	cout<<"\n1-Add Rectangle\n2-Find Area\n3-Find Perimeter\n4-Update Rectangle\n0-Exit\nEnter Choice : ";
	cin>>c;
	switch(c)
	{
		case 1:
			r[x].addRect(x,r);
			x++;
			goto r1;
		case 2:
			cout<<"Enter ID : ";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(r[i].searchRect(ID)=='y')
				{
					cout<<"\nArea = "<<r[i].area()<<endl;
					break;
				}
			}
			if(i==x)
			{
				cout<<"\nRectangle not found!\n";
			}
			goto r1;
		case 3:
			cout<<"Enter ID:";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(r[i].searchRect(ID)=='y')
				{
					cout<<"\nPerimeter = "<<r[i].perimeter()<<endl;
					break;
				}
			}
			if(i==x)
			{
				cout<<"\nRectangle not found!\n";
			}
			goto r1;
		case 4:
			cout<<"Enter ID : ";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(r[i].searchRect(ID)=='y')
				{
					r[i].update();
					break;
				}
			}
			if(i==x)
			{
				cout<<"\nRectangle not found!\n";
			}
			goto r1;
		case 0:
			cout<<"\n......Exiting......";
			cout<<endl<<"............................................................."<<endl;
			cout<<"ID\t:\t25CE1065"<<endl<<"Name\t:\tPambhar Hetvi Chandreshbhai";
			cout<<endl<<"............................................................."<<endl;
			return 0;
		default:
			cout<<"\nInvalid value entered!\n";
			goto r1;
	}

    return 0;
}
