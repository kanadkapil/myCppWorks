#include <iostream>
#include <vector> // for arr[n] initialization
#include <climits> //for  INT_MAX, INT_MIN

using namespace std;

int main()
{
    int n;
    cout << "Enter of number of Elements: ";
    cin >> n;

    vector<int> arr(n); // instead of VLA
    // int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Arr[" << n << "] = {";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << " }" << endl;

    int maxNo = INT_MIN; // for max use min
    int minNo = INT_MAX; // for min use max
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout << "Maximum Number is: " << maxNo << endl;
    cout << "Minimum Number is: " << minNo << endl;

    return 0;
}