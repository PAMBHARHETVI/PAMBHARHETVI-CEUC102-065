#include <iostream>
#include "BankAccount.h"
using namespace std;
void performTransaction(BankAccount &acc);
int main()
{ BankAccount acc(1000);

    try {
        performTransaction(acc);
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    acc.showBalance();

    return 0;
}

void performTransaction(BankAccount &acc)
{
    acc.deposite(500);
    acc.withdraw(2000);
}


