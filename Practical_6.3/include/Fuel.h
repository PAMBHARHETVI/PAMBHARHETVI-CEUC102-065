#ifndef FUEL_H
#define FUEL_H
#include <iostream>
#include <string>


using namespace std;


class Fuel
{
    public:
        Fuel();
        Fuel(string );
    protected:
        void display();;

    private:
        string fuel_type;
};

#endif // FUEL_H
