#include <iostream>
using namespace std;

template <class myTemplate>
myTemplate add(myTemplate a, myTemplate b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum = " << add(x, y) << endl;

    double a, b;
    cout << "Enter two floating-point numbers: ";
    cin >> a >> b;
    cout << "Sum = " << add(a, b) << endl;

    return 0;
}
