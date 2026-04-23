#include "Circle.h"
#include<iostream>
using namespace std;
Circle::Circle()
{
    //ctor
}
void Circle::get_information()
{
    get_radius();
}
void Circle::display_information()
{
    compute_area();
    cout<<"\nRadius : "<<radius;
    cout<<"\nArea of circle : "<<area<<endl;
}
void Circle::compute_area()
{
    area=3.14*(radius*radius);
}
