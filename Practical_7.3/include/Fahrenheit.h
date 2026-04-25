#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

class Celsius;

class Fahrenheit
{
    public:
        float temp;
        Fahrenheit();
        Fahrenheit(float );
        operator Celsius();
        void display();
    protected:

    private:



};

#endif // FAHRENHEIT_H
