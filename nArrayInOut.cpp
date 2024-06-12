#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Size of the array: ";
    cin >> n;
    int array[n];

    // cout << "enter element " << n << ": ";

    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << " : ";
        cin >> array[i];
    }

    cout << " Array: [ ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << "]";
}