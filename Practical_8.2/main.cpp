#include <iostream>
#include <cmath>
#include "NegativeNumberException.h"
using namespace std;

int main()
{
    double num;

    cout << "Enter a number: ";
    cin >> num;

    try
    {
        if (num < 0)
        {
            throw NegativeNumberException();
        }

        cout << "Square root = " << sqrt(num) << endl;
    }
    catch (NegativeNumberException e)
    {
        e.message();
    }

    return 0;
}
