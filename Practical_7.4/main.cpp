#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

int main()
{
    Shape* s1=new Rectangle(5,4);
    Shape* s2=new Circle(3);

    cout<< s1->Area() <<endl;
    cout<< s2->Area() <<endl;

    delete s1;
    delete s2;
    return 0;
}
