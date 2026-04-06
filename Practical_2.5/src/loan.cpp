#include "loan.h"
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

loan::loan()
{
    id=ID;
    rate=4.5;
}


void loan::insert_data()
{
    cout<<"account holder name:";
    getline(cin,acc_hold_name);
    cout<<"loan amount:";
    cin>>amount;
    cout<<"Tenure";
    cin>>tenure;
    ID++;
}

void loan::emi_calculator()
{
    emi=(amount*rate*pow((1+rate),tenure))/(pow((1+rate),tenure)-1);

}

void loan::display_data()
{
    cout<<"ID : "<<id<<"\ntoatal loan amount : "<<amount<<"\nRate"<<rate<<"\nEMI : "<<emi<<"\nLoan tenure"<<tenure;
}

