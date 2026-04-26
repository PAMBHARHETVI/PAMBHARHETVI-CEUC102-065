#include <iostream>
#include <iomanip>
using namespace std;

// User-defined manipulator
ostream& currency(ostream& out) {
    out << "Rs. ";
    return out;
}

int main() {
    string name[] = {"Amit", "Riya", "Karan"};
    int marks[] = {85, 92, 78};
    float fees[] = {15000.5, 20000.75, 18000};

    cout << "Name\tMarks\tFees" << endl;

    for (int i = 0; i < 3; i++) {
        cout << name[i] << "\t"<< marks[i] << "\t"<< currency<< fixed << setprecision(2)<< fees[i] << endl;
    }

    return 0;
}
