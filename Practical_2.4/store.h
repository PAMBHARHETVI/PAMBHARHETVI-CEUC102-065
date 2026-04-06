#ifndef STORE_H
#define STORE_H
#include<string>
using namespace std;

class store
{
    public:
        store();

        void increasing_stock();
        void decreasing_stock();
        void displaying_item_details();
        void updating_details(int);

    protected:

    private:
        int Id;
        int quantity;
        string name;
        float price;
};

#endif // STORE_H
