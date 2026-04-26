#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    string name, searchName;
    int qty;
    float price;

    do {
        cout << "\n1. Add Item\n2. View All Items\n3. Search Item\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // 1. Add Item
        if (choice == 1) {
            ofstream file("inventory.txt", ios::app);

            cout << "Enter item name: ";
            cin >> name;
            cout << "Enter quantity: ";
            cin >> qty;
            cout << "Enter price: ";
            cin >> price;

            file << name << " " << qty << " " << price << endl;
            file.close();

            cout << "Item added successfully!\n";
        }

        // 2. View All Items
        else if (choice == 2) {
            ifstream file("inventory.txt");

            cout << "\nInventory List:\n";
            while (file >> name >> qty >> price) {
                cout << "Name: " << name
                     << ", Qty: " << qty
                     << ", Price: " << price << endl;
            }

            file.close();
        }

        // 3. Search Item
        else if (choice == 3) {
            ifstream file("inventory.txt");
            cout << "Enter item name to search: ";
            cin >> searchName;

            bool found = false;

            while (file >> name >> qty >> price) {
                if (name == searchName) {
                    cout << "Found: "<< name << " "<< qty << " "<< price << endl;
                    found = true;
                }
            }

            if (!found)
                cout << "Item not found!\n";

            file.close();
        }

    } while (choice != 4);

    return 0;
}
