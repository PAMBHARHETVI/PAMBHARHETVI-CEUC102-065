#ifndef BASE_ACCOUNT_H
#define BASE_ACCOUNT_H


class Base_account
{
    public:
        Base_account();
        Base_account(long double ,long double );
        void deposite(double );
        void withdraw(double );
        void display();


    protected:
        long double current_balance;
        long double account_number;

    private:
};

#endif // BASE_ACCOUNT_H
