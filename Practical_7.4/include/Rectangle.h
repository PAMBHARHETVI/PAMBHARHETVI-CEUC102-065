#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"


class Rectangle : public Shape
{
    public:
        Rectangle();
        Rectangle(double ,double );
        double Area();

    protected:

    private:
        double length,width;
};


#endif // RECTANGLE_H
