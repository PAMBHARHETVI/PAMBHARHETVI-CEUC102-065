#include "Derived2.h"
#include <iostream>
using namespace std;
Derived2::Derived2()
{
    data=new int[5];
    cout<<"Derived2 Constructor Called\n";
}

Derived2::~Derived2()
{
    delete[] data;
    cout<<"Derived2 Destructor Called\n";
}
