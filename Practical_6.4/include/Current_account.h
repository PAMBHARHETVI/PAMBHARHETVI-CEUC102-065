#ifndef CURRENT_ACCOUNT_H
#define CURRENT_ACCOUNT_H

#include "Base_account.h"


class Current_account : protected Base_account
{
    public:
        Current_account();
        Current_account(long double , long double ,double );//Base_account(account_number,current_balance);
        void withdraw(double );
        void deposite(double );
        void display();

    protected:


    private:
        double overdraft_limit;

};

#endif // CURRENT_ACCOUNT_H
