#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 2, temp;
    cout << "a: " << a << " " << "b: " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "after swapped___" << endl;
    cout << "a: " << a << " " << "b: " << b << endl;
}