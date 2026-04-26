#ifndef DERIVED2_H
#define DERIVED2_H

#include <Base2.h>


class Derived2 : public Base2
{
    public:
        Derived2();
        virtual ~Derived2();

    protected:
        int* data;
    private:
};

#endif // DERIVED2_H
