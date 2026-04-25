#include <iostream>
#include "Calculator.h"
using namespace std;



int main()
{
    Calculator c1,c2,c3,c4,c5,c6,c7,c8;

    c1.set_data(3,4);
    c2.set_data(3.5f,4.5f);
    c3.set_data(3.5f,4);
    c4.set_data(3,4.5f);

    c5=c1+c1;
    c6=c3+c3;
    c7=c2+c2;
    c8=c4+c4;

    cout<<"\nc5:\n";
    c5.showdata();
    cout<<"\nc6:\n";
    c6.showdata();
    cout<<"\nc7:\n";
    c7.showdata();
    cout<<"\nc8:\n";
    c8.showdata();



    return 0;
}
