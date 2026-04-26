#include "Postgraduate.h"
#include <iostream>
using namespace std;

Postgraduate::Postgraduate()
{
    //ctor
}

void Postgraduate::compute_grade()
{
    if(marks>=80)
        cout<<"postgraduate Grade: A\n";
    else if(marks=60)
        cout<<"Postgraduate Grade: B\n";
    else
        cout<<"Postgraduate Grade: C\n";
}
