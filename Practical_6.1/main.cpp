#include <iostream>
#include"Shape.h"
#include"Circle.h"


using namespace std;

int main()
{
    int n;
    cout<<"Using static method : \n";
    Circle C1,C2;
    C1.get_information();
    C1.display_information();
    C2.get_information();
    C2.display_information();

    cout<<"\nUsing dynamic method : \n";
    Circle *c=new Circle();
    cout<<"\nnumber of circles : ";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        c++;
        c[i].get_information();
        c[i].display_information();
    }

    return 0;
}
