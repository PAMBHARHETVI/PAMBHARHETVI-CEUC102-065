#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");


    if (!file) {
        cout << "Error: File cannot be opened!" << endl;
        return 1;
    }

    string line;
    int lines = 0, words = 0, characters = 0;

    while (getline(file, line)) {
        lines++;

        bool inWord = false;

        for (int i = 0; i < line.length(); i++) {
            characters++;


            if (line[i] != ' ' && line[i] != '\t') {
                if (!inWord) {
                    words++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }
        }

        characters++;
    }

    file.close();

    cout << "Total Lines: " << lines << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Characters: " << characters << endl;

    return 0;
}
