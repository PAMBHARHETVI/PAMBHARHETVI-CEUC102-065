#include <iostream>
#include "Base1.h"
#include "Base2.h"
#include "Derived1.h"
#include "Derived2.h"
using namespace std;

int main()
{
    cout<<"---Without Virtual Destrutor---\n";
    Base1* b1= new Derived1();
    delete b1;

    cout<<"\n---With Virtual Destructor---\n";
    Base2* b2=new Derived2();
    delete b2;

    return 0;
}
