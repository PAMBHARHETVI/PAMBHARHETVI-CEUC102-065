#include "Circle.h"
#
Circle::Circle()
{
    //ctor
}

Circle::Circle(double r):radius(r){}

double Circle:: Area()
{
    return 3.14*radius*radius;
}
