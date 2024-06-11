#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cout << "enter number : ";
    cin >> n;
    cout << "enter range : ";
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        cout << n << " X " << i << " = " << n * i << endl;
    }

    cout << endl;
    int i =1;
    while (i <= r)
    {
        cout << n << " X " << i << " = " << n * i << endl;
        i++;
    }
}