#include <iostream>
#include "studentRecord.h"
using namespace std;

int main()
{
	studentRecord s[30];
	int x=0,i,rn;
	int c;
	r1:
	cout<<"\n1-Add Student\n2-Find Average\n0-Exit\nEnter Choice :";
	cin>>c;
	switch(c)
	{
		case 1:
			s[x].addStudent(x,s);
			x++;
			goto r1;
		case 2:
			cout<<"Enter Roll No. : ";
			cin>>rn;
			for(i=0;i<x;i++)
			{
				if(s[i].searchStudent(rn)=='y')
				{
					s[i].average();
					break;
				}
			}
			if(i==x)
			{
				cout<<"\nStudent not found!\n";
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
