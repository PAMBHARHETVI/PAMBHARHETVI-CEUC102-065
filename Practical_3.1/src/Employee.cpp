#include<iostream>
#include "Employee.h"
#include<string>
using namespace std;
Employee::Employee()
{
    basic_salary=0;
    bonus_amount=1000;
    total_salary=0;
}

void Employee::get_inforamtion()
{
    cout<<"Name:";
    cin>>name;
    cout<<"Basic Salary:";
    cin>>basic_salary;

    calculate_salary();
}

void Employee::display_information()
{
    cout<<"Name : "<<name<<"\nBasic Salary : "<<basic_salary<<"\nBonus : "<<bonus_amount<<"\nTotal_salary : "<<total_salary;
}

