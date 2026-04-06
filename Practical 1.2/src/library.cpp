#include "library.h"
#include<iostream>
#include<string.h>
#include "library.h"
using namespace std;

library::library()
{
    //ctor
}
void library::addBook()
{
	getchar();
	cout<<"Enter Book Title : ";
	getline(cin,title);
	cout<<"Enter Author\'s Name : ";
	getline(cin,author);
	cout<<"Enter Book ID : ";
	cin>>bookID;
	cout<<"Enter No. of copies : ";
	cin>>copies;
}
void library::issueBook()
{
	if(copies>0)
	{
		copies--;
		cout<<endl<<"Book issued."<<endl;
	}
	else
	{
		cout<<endl<<"No copies available!"<<endl;
	}
}

void library::returnBook()
{
	copies++;
	cout<<endl<<"Book Returned."<<endl;
}
 void library::displayBook(int &u)
{
	cout<<endl<<"Book ID : "<<bookID<<endl<<"Title : "<<title<<endl<<"Author : "<<author<<endl<<"No. of Copies : "<<copies<<endl;
	u+=copies;
}

char library::searchBook(int ID)
{
	if( ID == bookID )
		return 'y';
	return 'n';
}
