#include <iostream>
using namespace std;
//
class Point
{
    public:
        Point();

        Point(int , int );
        Point& move(int ,int );
        void display();



    protected:

    private:
        int x,y;
};
Point::Point()
{
    //ctor
    x=0;
    y=0;
}

Point :: Point(int x_val,int y_val)
{
    x=x_val;
    y=y_val;
}

Point& Point::move(int dx,int dy)
{
    x+=dx;
    y+=dy;
    return *this;
}

void Point::display()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

void modifyPoint(Point *p)
{
    p->move(5,5);
}


int main()
{
    Point p(1,1);

    cout<<"Initial Point : ";
    p.display();

    p.move(2,3).move(-1,4);

    cout<<"After chaining : ";
    p.display();

    modifyPoint(&p);

    cout<<"After pointer Modification : ";
    p.display();

    return 0;
}
