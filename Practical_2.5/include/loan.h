#ifndef LOAN_H
#define LOAN_H
#include<string.h>
using namespace std;
class loan
{
    public:
        loan();
        void insert_data();
        void display_data();

    protected:

    private:
        static int ID;
        int id;
        string acc_hold_name;
        double amount;
        float emi;
        float rate;
        int tenure;
        void emi_calculator();
};

int loan::ID=1;

#endif // LOAN_H
