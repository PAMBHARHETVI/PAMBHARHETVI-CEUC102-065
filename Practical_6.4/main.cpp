#include <iostream>
#include <string>
#include "Savings_account.h"
#include "Current_account.h"
#include "Base_account.h"
using namespace std;

int main()
{
    Savings_account s1(101, 5000, 5);
    Current_account c1(201, 3000, 2000);

    cout<<"\n---Saving Account---\n";
    s1.deposite(1000);
    s1.withdraw(2000);
    s1.add_interest();
    s1.display();

    cout<<"\n---current Account---\n";
    c1.deposite(2000);
    c1.withdraw(4500);
    c1.display();
    return 0;
}
