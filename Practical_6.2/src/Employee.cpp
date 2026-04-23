#include "Employee.h"
#include <iostream>
#include<string>
using namespace std;
int Employee::count=0;
Employee::Employee()
{
    //ctor
}
Employee::Employee(string name,int age):Person(name,age)
{
    count++;
    employee_ID=count;


}
void Employee::display()
{
    cout<<"Employee ID : "<<employee_ID<<endl;
    //Person::dispaly();
}
