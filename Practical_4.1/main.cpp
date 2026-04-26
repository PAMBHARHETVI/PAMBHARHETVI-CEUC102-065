#include<iostream>
using namespace std;

int main()
{

    int *p= new int[10];
    for(int i=0; i<10 ; i++)
    {
        p[i]=i;
         cout<<p[i]<<" ";
    }
    p[2]=p[1]=12;
    cout<<"\n"<<"after insert\n";
    cout<<p[2]<<" "<<p[1];
    p[11]=11;
    cout<<"\n"<<p[11]<<endl;
    for(int i=0; i<=11 ; i++)
    {
         cout<<p[i]<<" ";
    }
    delete p;
    cout<<"\nafter delete\n";
    cout<<p[3]<<endl;

    for(int i=0; i<=11 ; i++)
    {
         cout<<p[i]<<" ";
    }
    return 0;
}
