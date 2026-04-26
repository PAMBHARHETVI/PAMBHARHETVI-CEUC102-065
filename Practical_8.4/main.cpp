#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    string filename;
    ifstream file;
    int num,sum=0,count =0;

    while(true)
    {
        cout<<"Enter file name(or type exit): ";
        cin>>filename;

        if(filename=="exit")
            return 0;

        file.open(filename);

        if(!file)
        {
            cout<<"Error: File cannot be opened!\n";
        }
        else
        {
            break;
        }
    }

    while(file >> num)
    {
        sum+=num;
        count++;
    }

    if(!file.eof())
    {
        cout<<"Warning: Some invalid data skipped!\n";
    }

    file.close();

    if(count>0)
    {
        cout<<"Sum ="<<sum<<endl;
        cout<<"Average ="<<(float)sum/count<<endl;
    }
    else
    {
        cout<<"No valid data found.\n";
    }
    return 0;
}
