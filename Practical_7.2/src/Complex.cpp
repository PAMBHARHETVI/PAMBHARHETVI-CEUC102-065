#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
    real=0;
    img=0;
}
   Complex::Complex(int real,int img)
{
    this->real=real;
    this->img=img;
}

void Complex::get_data()
{
    cout<<"Real number : ";
    cin>>real;
    cout<<"Imaginary number : ";
    cin>>img;
}

void Complex::display()
{
    cout<<real<<"+i"<<img<<endl;
}
