#include "Manager.h"
#include<iostream>
#include<string>
using namespace std;

Manager::Manager()
{
    //ctor
}
Manager::Manager(string name,int age,string department):Employee(name,age)
{
    this->department=department;
}
 void Manager::display()
{
    Person::display();
    Employee::display();
    cout<<"Department : "<<department<<endl;
}
