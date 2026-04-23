#ifndef CIRCLE_H
#define CIRCLE_H

#include <Shape.h>


class Circle : protected Shape
{
    public:
        Circle();
        void get_information();
        void display_information();

    protected:

    private:
        float area;
        void compute_area();

};

#endif // CIRCLE_H
