#include <iostream>
#include "Celsius.h"
#include "Fahrenheit.h"
using namespace std;
bool operator==(Celsius, Fahrenheit);
int main()
{
    Celsius c1(25),c2;
    Fahrenheit f1;

    f1=c1;
    cout<<"Celsius to Fahrenheit: ";
    f1.display();


    c2=f1;
    cout<<"Fahrenheit to Celcius: ";
    c2.display();

    if(c1==f1)
        cout<<"Temperatures are equal\n";
    else
        cout<<"Temperature are not eequl\n";

    Celsius arr[3]={Celsius(10),Celsius(20),Celsius(30)};
    cout<<"\nArray values:\n";
    for(int i=0; i<3 ; i++)
    {
        arr[i].display();
    }


    Celsius queue[3];
    int front=0,rear=0;

    queue[rear++]=Celsius(15);
    queue[rear++]=Celsius(25);

    cout<<"\nQueue values:\n";
    while(front<rear)
    {
        queue[front++].display();
    }

    return 0;
}

bool operator==(Celsius c, Fahrenheit f) {
    Celsius tempC = f;
    return (c.temp == tempC.temp);
}
