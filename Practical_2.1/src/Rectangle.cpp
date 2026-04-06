#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle()
{
    //ctor
}

void Rectangle::addRect(int x,Rectangle *r)
{
	int i;
	r2:
	cout<<"Enter Rectangle ID : ";
	cin>>rectID;
	for(i=0;i<x;i++)
	{
		if(r[i].searchRect(rectID)=='y')
		{
			cout<<"\nDuplicate Rectangle ID!\n";
			goto r2;
		}
	}
	cout<<"Enter Length : ";
	cin>>length;
	cout<<"Enter Width : ";
	cin>>width;
}

void Rectangle::update()
{
	cout<<"Enter length : ";
	cin>>length;
	cout<<"Enter width : ";
	cin>>width;
}

double Rectangle::area()
{
	return length*width;
}

double Rectangle::perimeter()
{
	return 2*(length+width);
}

char Rectangle::searchRect(int ID)
{
	if(ID==rectID)
		return 'y';
	return 'n';
}
