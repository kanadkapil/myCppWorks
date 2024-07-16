#include <iostream>
#include <vector>
#include <climits> // for arr max min
using namespace std;

void arrIn(int n, vector<int> &arr)
{

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrOut(int n, vector<int> &arr)
{

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
}

void MaxMin(int n, vector<int> &arr, int &max, int &min)
{
    max = INT_MIN;
    min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
}

int main()
{
    int n;

    cout << "Enter Arr size: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter Elements: ";
    arrIn(n, arr);

    cout << "Array: [ ";
    arrOut(n, arr);
    cout << "]" << endl;

    int max, min;
    MaxMin(n, arr, max, min);

    // Display the max and min values
    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
}