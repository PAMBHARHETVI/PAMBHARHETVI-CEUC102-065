#include <iostream>
#include <string>
#include "store.h"

using namespace std;

int main()
{
    store item[3];
    int ch,i;


    for(i=0 ; i<3; i++)
    {
        item[i].updating_details(i+1);
    }



    x: cout<<"1. increasing stock\n2.decreasing stock\n3.displaying item stock\n4.updating detais\n5.exit\n";
    cout<<"choice:";
    cin>>ch;


    switch(ch)
    {
    case 1:
        cout<<"item ID:";
        cin>>i;
        item[i-1l].increasing_stock();
        goto x;

    case 2:
        cout<<"item ID:";
        cin>>i;
        item[i-1].decreasing_stock();
        goto x;

    case 3:
        cout<<"ID"<<"   "<<"name"<<"                "<<"price"<<"   "<<"stock\n";
        for(int i=0 ; i<3 ; i++)
            item[i].displaying_item_details();
        goto x;

    case 4:
        cout<<"item ID:";
        cin>>i;
        item[i-1].updating_details(i);
        goto x;
    case 5:
        cout<<"\n......Exiting......";
        cout<<endl<<"............................................................."<<endl;
        cout<<"ID\t:\t25CE065"<<endl<<"Name\t:\tPambhar Hetvi chandreshbhai";

        break;
    }

    return 0;
}
