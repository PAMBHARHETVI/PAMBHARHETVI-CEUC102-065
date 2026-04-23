#include <iostream>
#include <string>
#include "Fuel.h"
#include "Brand.h"
#include "Car.h"
using namespace std;

Fuel::Fuel()
{
    //ctor
}
Fuel::Fuel(string fuel_type)
{
    this->fuel_type = fuel_type;
}

void Fuel:: display()
{
    cout<<"Fuel : "<<fuel_type<<endl;
}
