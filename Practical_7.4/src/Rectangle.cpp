#include "Rectangle.h"

Rectangle::Rectangle()
{
    //ctor
}

Rectangle::Rectangle(double l,double w):length(l),width(w){}

double Rectangle::Area()
{
    return length*width;
}
