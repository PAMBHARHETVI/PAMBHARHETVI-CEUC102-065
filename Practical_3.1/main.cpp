#include <iostream>
#include "Employee.h"
#include<string>
using namespace std;

int main()
{
    Employee e1,e2;
    e1.get_inforamtion();
    e2.get_inforamtion();
    cout<<"\nDisplay\n";
    e1.display_information();
    cout<<endl<<endl;
    e2.display_information();
    return 0;
}
