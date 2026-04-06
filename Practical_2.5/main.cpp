#include <iostream>
#include<string.h>
#include "loan.h"

using namespace std;

int main()
{
    loan l1;
    int ch;
    x:cout<<"1.insert data\n2.display data\n3.exit";
    cout<<"choice";
    cin>>ch;
    switch(ch)
    {
    case 1:
        l1.insert_data();
        goto x;
    case 2:
        l1.display_data();
        goto x;
    case 3:
 	cout<<"\n......Exiting......";
        cout<<endl<<"............................................................."<<endl;
        cout<<"ID\t:\t25CE065"<<endl<<"Name\t:\tPambhar Hetvi chandreshbhai";
        break;
    default :
        cout<<"ERROR:Invalid Choice\n";
        goto x;
    }
    return 0;
}
