#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "Base_account.h"
class Savings_account : protected Base_account
{
    public:
        Savings_account();
        Savings_account(long double ,long double ,float );//Base_account(account_number,current_balance)
        void add_interest();
        void withdraw(double );
        void deposite(double );
        void display();

    protected:

    private:
        float interest_rate;
};

#endif // SAVINGS_ACCOUNT_H
