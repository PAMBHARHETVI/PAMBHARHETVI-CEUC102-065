#include <iostream>
#include <chrono>
using namespace std;

int recursion(int data[], int n) {
    if (n == 0)
        return 0;
    return data[n - 1] + recursion(data, n - 1);
}

int main() {
    int n = 1000, sum = 0;
    int data[n];

    for (int i = 0; i < n; i++) {
        data[i] = i + 5;
    }

    // Iterative timing
    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < n; i++) {
        sum += data[i];
    }

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double, micro> duration1 = end - start;

    cout << "Iterative Sum: " << sum << endl;
    cout << "Runtime (Iterative): " << duration1.count() << " microseconds\n";

    // Recursive timing
    auto start1 = chrono::high_resolution_clock::now();

    int recSum = recursion(data, n);

    auto end1 = chrono::high_resolution_clock::now();

    chrono::duration<double, micro> duration2 = end1 - start1;

    cout << "Recursive Sum: " << recSum << endl;
    cout << "Runtime (Recursive): " << duration2.count() << " microseconds\n";

    return 0;
}
