#include "store.h"
#include<iostream>
#include<string>
using namespace std;

store::store()
{
    Id=0;
    price=0.0;
    quantity=0;
}

void store::increasing_stock()
{
    int number;
    cout<<"quantity:";
    cin>>number;
    if(number>0)
        quantity+=number;
    else
        cout<<"ERROR:invalid quantity";

}

void store::decreasing_stock()
{
    int number;
    cout<<"quantity:";
    cin>>number;
    if(number>0 && number<=quantity)
        quantity-=number;
    else
        cout<<"ERROR:invalid quantity";
}

void store::displaying_item_details()
{
    cout<<Id<<"    "<<name<<"             "<<price<<"   "<<quantity<<"\n";
}

void store::updating_details(int id)
{
    Id=id;
    cout<<"\nitem:"<<Id<<"\n";
    cout<<"name:";
    fflush(stdin);
    getline(cin,name);
    cout<<"new price:";
    cin>>price;
    cout<<"quantity:";
    cin>>quantity;

}

