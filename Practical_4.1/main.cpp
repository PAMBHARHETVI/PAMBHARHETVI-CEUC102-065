#include <iostream>
#include "number.h"
using namespace std;

int main()
{
    number *p= new number();
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i];
    }


    return 0;
}
