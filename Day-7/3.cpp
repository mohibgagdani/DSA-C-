#include <iostream>
using namespace std;

void fibonacciSeries(int n) {
    int a = 0, b = 1, sum;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    fibonacciSeries(terms);

    return 0;
}
