#include "Person.h"
#include<iostream>
#include<string>
using namespace std;
Person::Person()
{
    //ctor
}

Person::Person(string name, int age)
{
    this->name=name;
    this->age=age;
}
void Person::display()
{
    cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl;

}
