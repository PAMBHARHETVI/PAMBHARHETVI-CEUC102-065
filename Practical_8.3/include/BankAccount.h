#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
using namespace std;
class BankAccount
{
    public:
        BankAccount();

        BankAccount(double b);
        void deposite(double amount);
        void withdraw(double amount);
        void showBalance();
    protected:

    private:
        double balance;
};

#endif // BANKACCOUNT_H
