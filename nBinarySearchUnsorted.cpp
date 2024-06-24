#include <iostream>
#include <vector>
using namespace std;

// if  want to use vector
//  const vector<int>& arr

int BinarySearch(int n, int key, int arr[])
{
    int mid, s=0, e=n; // start end

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    // vector<int> array(n);

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the key to be searched: ";
    cin >> key;

    int result = BinarySearch(n, key, arr);
    cout << "Searched index: " << result << endl;
    return 0;
}