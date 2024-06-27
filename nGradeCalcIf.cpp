#include <iostream>
using namespace std;

int main()
{
    int numb;
    cout << "Enter Mark: ";
    cin >> numb;

    if (numb >= 0 && numb <= 100)
    {
        if (numb > 90)
            cout << "A";
        else if (numb > 80)
            cout << "B";
        else if (numb > 70)
            cout << "C";
        else if (numb > 60)
            cout << "D";
        else
            cout << "F";
    }
    else
    {
        cout << "Invalid Mark";
    }
}