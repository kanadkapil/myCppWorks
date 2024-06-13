#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{

    int x, factorial;
    cout << "Enter Digit: ";
    cin >> x;

    factorial = fact(x);
    cout << factorial;
}