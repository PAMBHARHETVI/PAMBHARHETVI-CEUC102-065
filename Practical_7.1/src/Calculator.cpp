#include "Calculator.h"
#include <iostream>
using namespace std;
Calculator::Calculator()
{
    //ctor
    a=0;
    b=0;
    c=0;
    d=0;
}

void Calculator::set_data(int x,int y)
{
    a=x;
    b=y;
}

void  Calculator::set_data(float x,float y)
{
    c=x;
    d=y;
}

void Calculator::set_data(int x,float y)
{
    a=x;
    d=y;
}

void Calculator::set_data(float x,int y)
{
    c=x;
    b=y;
}

void Calculator::showdata()
{
    cout<<"a: "<<a<<"\nb: "<<b<<"\nc: "<<c<<"\nd: "<<d<<endl;
}
