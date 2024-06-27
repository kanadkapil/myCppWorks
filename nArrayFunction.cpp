#include <iostream>
#include <vector>
using namespace std;

void input(int n, vector<int> &arr)
{
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int n, vector<int> &arr)
{ // can use arr.size() instead of n
    cout << "Array: [";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << "] " << endl;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);

    input(n, arr);

    display(n, arr);
}