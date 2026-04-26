#include "Undergraduate.h"
#include <iostream>
using namespace std;
Undergraduate::Undergraduate()
{
    //ctor
}

void Undergraduate::compute_grade()
{
    if(marks >= 75)
        cout<<"Undergraduate Grade: A\n";
    else if(marks>=50)
        cout<<"Undergraduate Grade: B\n";
    else
        cout<<"Undergraduate Grade: c\n";
}
