#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    int real;
    int img;

public:
    Complex();
    Complex(int ,int );
    Complex operator+(Complex c)
{
    Complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}

    Complex operator-(Complex c)
{
    Complex temp;
    temp.real=real-c.real;
    temp.img=img-c.img;
    return temp;
}

  void get_data();
    void display();
};

#endif // COMPLEX_H
