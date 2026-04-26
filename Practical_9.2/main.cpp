#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string sentence,word;
    map<string,int> freq;

    cout<<"Enter a sentences: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while(ss >> word)
    {
        freq[word]++;
    }

    cout<<"\nword Frequencies:\n";

    for(auto pair : freq)
    {
        cout<<pair.first <<" : "<<pair.second<<endl;
    }
    return 0;
}
