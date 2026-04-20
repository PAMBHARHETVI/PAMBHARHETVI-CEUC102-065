#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;

    int *p1= new int[n];
    int *p2= new int[m];
    int *p3= new int[m+n];
    cout<<"array 1:";
    for(int i=0 ; i<n ;i++)
    {
        cin>>p1[i];
        p3[i]=p1[i];
    }
    cout<<"array 2:";
    for(int i=0 ; i<m ; i++)
    {
        cin>>p2[i];
        p3[n+i]=p2[i];
    }

    for(int i=0 ; i<n+m-1 ;i++)
    {
        for(int j=i+1 ; j<n+m ; j++)
        {
            if(p3[i]<p3[j])
            {
                int t;
                t=p3[i];
                p3[i]=p3[j];
                p3[j]=t;
            }

        }

    }
    for(int i=0 ;i<n+m;i++)
    {
        cout<<p3[i]<<" ";
    }

    return 0;
}
