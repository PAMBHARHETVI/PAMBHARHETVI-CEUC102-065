#include <iostream>
#include "library.h"
using namespace std;
int main()
{
	int i,c,ID,x=0,y;
	library b[5];
	r1:
	cout<<endl<<"1-Add Book"<<endl<<"2-Issue a Book"<<endl<<"3-Return a Book"<<endl<<"4-Display Total Books"<<endl<<"0-Exit"<<endl<<"Enter Choice : ";
	cin>>c;
	switch(c)
	{
		case 1:
			b[x].addBook();
			x++;
			goto r1;
		case 2:
			cout<<"Enter Book Id : ";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(b[i].searchBook(ID)=='y')
				{
					b[i].issueBook();
					goto r1;
				}
			}
			if(i==x)
			{
				cout<<endl<<"Book not Found!"<<endl;
			}
			goto r1;
		case 3:
			cout<<"Enter Book ID : ";
			cin>>ID;
			for(i=0;i<x;i++)
			{
				if(b[i].searchBook(ID)=='y')
				{
					b[i].returnBook();
					goto r1;
				}
			}
			if(i==x)
			{
				cout<<endl<<"Book not Found!"<<endl;
			}
			goto r1;
		case 4:
			y=0;

			cout<<endl<<"Book List :"<<endl;
			for(i=0;i<x;i++)
			{
				b[i].displayBook(y);
			}
			cout<<endl<<"Total No. of Books : "<<y<<endl;
			goto r1;
		case 0:
			cout<<endl<<"......Exiting......";
			cout<<endl<<"............................................................."<<endl;
			cout<<"ID\t:\t25CE065"<<endl<<"Name\t:\tPambhar Hetvi Chandreshbhai";
			cout<<endl<<"............................................................."<<endl;
			return 0;
		default:
			cout<<endl<<"Invalid Entry!"<<endl;
			goto r1;
	}
    return 0;
}
