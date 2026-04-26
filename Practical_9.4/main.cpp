#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<string>> directory;
    int choice;
    string folder, file;

    do {
        cout << "\n1. Add Folder\n2. Add File\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter folder name: ";
            cin >> folder;
            directory[folder];  // creates folder
            cout << "Folder added\n";
        }

        else if (choice == 2) {
            cout << "Enter folder name: ";
            cin >> folder;

            if (directory.find(folder) != directory.end()) {
                cout << "Enter file name: ";
                cin >> file;
                directory[folder].push_back(file);
                cout << "File added\n";
            } else {
                cout << "Folder not found!\n";
            }
        }

        else if (choice == 3) {
            cout << "\nDirectory Structure:\n";

            for (auto it = directory.begin(); it != directory.end(); it++) {
                cout << "Folder: " << it->first << endl;

                for (string f : it->second) {
                    cout << "  - " << f << endl;
                }
            }
        }

    } while (choice != 4);

    return 0;
}
