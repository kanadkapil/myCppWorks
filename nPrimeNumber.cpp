#include <iostream>
using namespace std;

int main()
{
    int a, i;
    cout << "Enter a number: ";
    cin >> a;

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << " is Non Prime" << endl;
            break;
        }
    }
    if (i == a)
    {
        cout << " is prime." << endl;
    }
}