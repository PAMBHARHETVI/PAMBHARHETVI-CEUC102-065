#include "studentRecord.h"
#include<iostream>
#include<cstring>
using namespace std;

studentRecord::studentRecord()
{
    rollNo=1;
    strcpy(name,"xyz");
    marks1=marks2=marks3=0;

}
void studentRecord::addStudent(int x,studentRecord *s)
{
	int i;
	r2:
	cout<<"\nEnter RollNo. : ";
	cin>>rollNo;
	for(i=0;i<x;i++)
	{
		if(rollNo==s[i].rollNo)
		{
			cout<<"\nDuplicate Roll No. exists\n";
			goto r2;
		}
	}
	getchar();
	cout<<"Enter Name : ";
	cin.getline(name,30);
	cout<<"Enter Marks 1 : ";
	cin>>marks1;
	cout<<"Enter Marks 2 : ";
	cin>>marks2;
	cout<<"Enter Marks 3 : ";
	cin>>marks3;
}

char studentRecord::searchStudent(int rn)
{
	if(rn==rollNo)
		return 'y';
	return 'n';
}

void studentRecord::average()
{
	cout<<"\nAverage : "<<(float)(marks1+marks2+marks3)/3<<endl;
}
