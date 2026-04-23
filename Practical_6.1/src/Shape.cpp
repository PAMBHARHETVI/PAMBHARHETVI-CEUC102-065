#include "Shape.h"
#include<iostream>
using namespace std;
Shape::Shape()
{
    //ctor
}
void Shape::get_radius()
{
    cout<<"\nRadius : ";
    cin>>radius;
}
