#include <iostream>
#include <string>
#include "Fuel.h"
#include "Brand.h"
#include "Car.h"
using namespace std;

Brand::Brand()
{
    //ctor
}

Brand:: Brand(string model_name)
{
    this->model_name=model_name;
}

void Brand::display()
{
    cout<<"Brand : "<<model_name<<endl;
}
