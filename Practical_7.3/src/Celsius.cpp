#include "Celsius.h"
#include "Fahrenheit.h"
#include <iostream>
using namespace std;
Celsius::Celsius()
{
    temp=0;
}
Celsius::Celsius(float t)
{
    temp=t;
}

Celsius::operator Fahrenheit()
{
    return Fahrenheit((temp*9/5)+32);
}

void Celsius:: display()
{
    cout<<temp <<" Celsius"<<endl;
}
