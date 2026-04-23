#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include <Person.h>
using namespace std;


class Employee : protected Person
{
    public:
        Employee();
        Employee(string , int );
        //::Person(string , int );
    protected:
        void display();
        void get_employee_detail();
    private:
        static int count;
        int employee_ID;


};

#endif // EMPLOYEE_H
