#ifndef WALLET_H
#define WALLET_H


class Wallet
{
    public:
        Wallet();

        void addUser(int);
        void loadMoney();
        void transferMoney(Wallet &);
        void viewBalance();
        char searchUser(long int);

    protected:

    private:
        long int walletID;
        char userName[20];
        float currentBalance;
};

#endif // WALLET_H
