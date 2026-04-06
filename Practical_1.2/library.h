#ifndef LIBRARY_H
#define LIBRARY_H
#include<iostream>
#include<string.h>
using namespace std;
class library
{
    public:
        library();

        void addBook();
        void issueBook();
        void returnBook();
        void displayBook(int &);
        char searchBook(int);

    protected:

    private:
        int bookID;
        int copies;
        string title;
        string author;
};

#endif // LIBRARY_H
