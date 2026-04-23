#ifndef MANAGER_H
#define MANAGER_H
#include<iostream>
#include<string>

#include <Employee.h>
using namespace std;

class Manager : protected Employee
{
    public:
        Manager();
        Manager(string name,int age,string department);
        //::Employee(string name,int age);
        void display();


    protected:

    private:
        string department;
};

#endif // MANAGER_H
