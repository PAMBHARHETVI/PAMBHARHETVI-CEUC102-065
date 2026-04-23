#include <iostream>
#include <string>
#include "Fuel.h"
#include "Brand.h"
#include "Car.h"
using namespace std;

int main()
{
    Car C1("BMW","Petrol","Black"),C2("Mercedes","Diesel","White"),C3("Kia","Blue","Electric"),C4("Maruti Suzuki","Petrol/CNG","Grey");
    cout <<"Information about cars :  "<< endl;
    C1.display();
    C2.display();
    C3.display();
    C4.display();
    return 0;
}
