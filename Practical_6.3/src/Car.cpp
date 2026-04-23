#include <iostream>
#include <string>

using namespace std;
#include "Fuel.h"
#include "Brand.h"
#include "Car.h"

Car::Car()
{
    //ctor
}

Car::Car(string model_name,string fuel_type ,string colour):Fuel(fuel_type),Brand(model_name)
{
    this->colour=colour;
}

void Car::display()
{
    Brand::display();
    Fuel::display();
    cout<<"colour : "<<colour<<endl;
    cout<<endl<<"-----------------------------------------------------------------------------------"<<endl;
}
