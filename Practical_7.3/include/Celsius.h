#ifndef CELSIUS_H
#define CELSIUS_H

class Fahrenheit;

class Celsius
{
    public:
        float temp;
        Celsius();
        Celsius(float );
        operator Fahrenheit();
        void display();
    protected:

    private:

};

#endif // CELSIUS_H
