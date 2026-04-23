#include <iostream>
#include <string>
using namespace std;

int main()
{
    string para;
    cout<<"Enter a paragraph: ";
    getline(cin,para);

    for(int i=0 ; para[i]!='\0' ; i++)
    {
        if(para[i]>='A' && para[i]<='Z')
        {
            para[i]=para[i]+32;
        }
    }

    string words[100];
    int freq[100]={0};
    int wordCount=0;
    string temp = "";

    for(int i=0; i<=para.length() ; i++)
    {
        if(para[i]!=' ' && para[i]!= '\0')
        {
            temp+=para[i];
        }
        else
        {
                if(temp!="")
                {
                    words[wordCount++]=temp;
                    temp = "";
                }
        }
    }

    for(int i=0 ; i<wordCount ; i++)
    {
        if(freq[i]==-1)
            continue;

        freq[i]=1;
        for(int j=i+1 ;j<wordCount ; j++)
        {
            if(words[i]==words[j]){
                freq[i]++;
                freq[j]=-1;
            }
        }
    }

    cout<< "\nword Frequences: \n";
    for(int i=0; i<wordCount ; i++)
    {
        if(freq[i] != -1)
        {
            cout<<words[i]<<" : "<<freq[i]<<endl;

        }
    }


    return 0;
}
