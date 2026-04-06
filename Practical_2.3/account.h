#ifndef ACCOUNT_H
#define ACCOUNT_H


class account
{
    public:
        account();

        void createAccount(int,account *);
        void withdraw();
        void deposit();
        void display();
        char searchUser(long int);

    protected:

    private:
        long int UID;
        float balance;
        char name[30];
};

#endif // ACCOUNT_H
