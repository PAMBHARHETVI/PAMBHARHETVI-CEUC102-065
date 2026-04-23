#include <iostream>
#include "Manager.h"
using namespace std;

int main()
{
    Manager M1("hetvi",18,"production"),M2("pambhar",18,"packaging");

    M1.display();

    cout<<endl;

    M2.display();
    return 0;
}
