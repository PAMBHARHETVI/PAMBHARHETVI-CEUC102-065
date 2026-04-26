#include "NegativeNumberException.h"
#include <iostream>
using namespace std;

NegativeNumberException::NegativeNumberException()
{
    // constructor
}

void NegativeNumberException::message()
{
    cout << "Error: Negative number not allowed!\n";
}
