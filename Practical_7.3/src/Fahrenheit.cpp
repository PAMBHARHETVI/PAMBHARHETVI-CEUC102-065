#include "Fahrenheit.h"
#include "Celsius.h"
#include <iostream>
using namespace std;
Fahrenheit::Fahrenheit()
{
    temp=0;
}
Fahrenheit::Fahrenheit(float t)
{
    temp=t;
}

Fahrenheit :: operator Celsius()
{
    return Celsius ((temp-32)*5/9);
}

void Fahrenheit:: display()
{
    cout<<temp<<" Fahrenheit"<<endl;
}
