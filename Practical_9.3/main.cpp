#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,x;
    set<int> s;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";

    for(int i=0; i<n ; i++)
    {
        cin>>x;
        s.insert(x);
    }

    cout << "\nUnique elements (sorted): ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    return 0;
}
