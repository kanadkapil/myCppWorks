#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1, c; // c is the next element

    if (n >= 1)
        cout << a << " ";
    if (n >= 2)
        cout << b << " ";
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    fib(x);
    cout << endl;
    return 0;
}