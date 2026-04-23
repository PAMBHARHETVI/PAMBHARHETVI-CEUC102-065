#ifndef BRAND_H
#define BRAND_H
#include <iostream>
#include <string>

using namespace std;


class Brand
{
    public:
        Brand();
        Brand(string );
    protected:
        void display();;

    private:
        string model_name;
};

#endif // BRAND_H
