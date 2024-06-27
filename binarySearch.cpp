#include <iostream>
#include <vector>
using namespace std;

int bins(int n, int key, vector<int> &arr)
{
    int s = 0, e = n, mid;

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }

    return -1;
}

int main()
{
    int n, key;
    cout << "Enter Number of element: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

cout << "array: [";
    for (int i = 0; i < n; i++)
    {
        cout << " " <<  arr[i] << " ";
    }
    cout << " ]" << endl;

    cout << "Enter Key: ";
    cin >> key;
    cout << "result: " << bins(n, key, arr);
}