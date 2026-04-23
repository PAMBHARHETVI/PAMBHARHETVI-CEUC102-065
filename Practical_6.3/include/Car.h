#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Fuel.h"
#include "Brand.h"

using namespace std;

class Car:protected Fuel, protected Brand
{
    public:
        Car();
        Car(string Brand,string Fuel,string colour);
        void display();
    protected:


    private:
        string colour;
};

#endif // CAR_H
