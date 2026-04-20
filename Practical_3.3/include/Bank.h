#ifndef BANK_H
#define BANK_H
#include<string>

class Bank
{
    public:
        Bank();

        void create_acc();
        int check_acc(int );
        void withdraw_money(float );
        void deposite_money(float );

    protected:

    private:
        static int acc_num;

        float balance;
};

#endif // BANK_H
