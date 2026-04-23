#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        Person();
        Person(string name,int age);

    protected:

        void display();

    private:
        int age;
        string name;
};

#endif // PERSON_H
