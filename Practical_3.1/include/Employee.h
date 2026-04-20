#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;
class Employee
{
    public:
        Employee();

        void get_inforamtion();
        void display_information();

    protected:

    private:
        string name;
        long int basic_salary;
        int bonus_amount;
        long int total_salary;
        void calculate_salary()
        {
            total_salary=basic_salary+bonus_amount;
        }
};

#endif // EMPLOYEE_H
