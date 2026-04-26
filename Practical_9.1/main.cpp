#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n,x;

    cout<<"enter number of elements: ";
    cin>>n;

    cout<<"enter elements:\n";
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    vector<int> v1 = v;
    reverse(v1.begin(), v1.end());

    cout<<"\nreversed using std::reverse():";
    for(int i: v1)
        cout<<i<<" ";

    vector<int> v2 = v;
    auto start = v2.begin();
    auto end=v2.end() -1 ;

    while(start < end )
    {
        int temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }

    cout<<"\nreversed manually using iterators: ";
    for(int i : v2)
        cout<<i<<" ";
    return 0;
}
