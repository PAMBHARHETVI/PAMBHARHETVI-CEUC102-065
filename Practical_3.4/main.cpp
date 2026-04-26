#include <iostream>
using namespace std;


template <class T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


template <class T>
T findMax(T arr[], int n) {
    T max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}


template <class T>
void reverseArray(T arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        T temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}


template <class T>
void leaders(T arr[], int n) {
    cout << "Leader elements: ";
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {


    int a[] = {16, 17, 4, 3, 5, 2};
    int n1 = 6;

    cout << "Integer Array:\n";
    display(a, n1);
    cout << "Max = " << findMax(a, n1) << endl;
    reverseArray(a, n1);
    cout << "Reversed: ";
    display(a, n1);
    leaders(a, n1);

    cout << endl;


    float b[] = {1.2, 3.5, 2.1, 4.8};
    int n2 = 4;

    cout << "Float Array:\n";
    display(b, n2);
    cout << "Max = " << findMax(b, n2) << endl;
    reverseArray(b, n2);
    cout << "Reversed: ";
    display(b, n2);
    leaders(b, n2);

    cout << endl;


    char c[] = {'a', 'z', 'b', 'm'};
    int n3 = 4;

    cout << "Character Array:\n";
    display(c, n3);
    cout << "Max = " << findMax(c, n3) << endl;
    reverseArray(c, n3);
    cout << "Reversed: ";
    display(c, n3);
    leaders(c, n3);

    return 0;
}
