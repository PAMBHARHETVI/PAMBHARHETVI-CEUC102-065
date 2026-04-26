#ifndef DERIVED1_H
#define DERIVED1_H

#include <Base1.h>


class Derived1 : public Base1
{
    public:
        Derived1();
        virtual ~Derived1();

    protected:
        int* data;
    private:
};

#endif // DERIVED1_H
