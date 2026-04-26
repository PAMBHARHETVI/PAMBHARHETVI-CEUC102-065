#include "Derived1.h"
#include <iostream>
using namespace std;

Derived1::Derived1()
{
    data=new int[5];
    cout<<"Derived Constructor Called\n";
}

Derived1::~Derived1()
{
    delete[] data;
    cout<<"Derived Constructor Called\n";
}
