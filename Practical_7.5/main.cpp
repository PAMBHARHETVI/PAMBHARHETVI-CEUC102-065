#include <iostream>
#include "Grading.h"
#include "Undergraduate.h"
#include "Postgraduate.h"
using namespace std;

int main()
{
    Grading* g;
    int marks;

    cout<<"Enter marks: ";
    cin>>marks;

    Undergraduate u;
    Postgraduate p;

    g=&u;
    g->set_marks(marks);
    g->compute_grade();

    g=&p;
    g->set_marks(marks);
    g->compute_grade();
    return 0;
}
