#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
class Circle: public Shape
{
    public:
        Circle();
        Circle(double );
        double Area();

    protected:

    private:
        double radius;
};


#endif // CIRCLE_H
