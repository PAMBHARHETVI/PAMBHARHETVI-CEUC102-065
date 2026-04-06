#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    public:
        Rectangle();

        void addRect(int,Rectangle *);
        char searchRect(int);
        double area();
        double perimeter();
        void update();

    protected:

    private:
        int rectID;
        float length,width;
};

#endif // RECTANGLE_H
