#include <iostream>
#include "Complex.h"
using namespace std;

s

int main()
{
    Complex C1,C2,C3(3,6),C4,C5;
    C1.get_data();
    C2.get_data();

    C4=C1+C2;
    cout<<"C1+C2 =";
    C4.display();

    C5=C3+C1;

    cout<<"C3+C1 =";
    C5.display();
    return 0;
}
