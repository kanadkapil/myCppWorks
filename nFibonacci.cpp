#include <iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << first << " ";
            continue;
        }
        if (i == 1) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;

        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    fibonacci(n);

    return 0;
}
