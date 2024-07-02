#include <iostream>
#include <vector>

using namespace std;

int binarySearch(int n, int key, vector<int> &arr)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == mid)
            return mid;
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
}

int bubbleSort(int n, vector<int> &arr)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        counter++;
    }
} 

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

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // input here
    cout << "Enter Elements: ";
    arrIn(n, arr);

    // unsorted output
    cout << "Unsorted Array: [";
    arrOut(n, arr);
    cout << "]" << endl;

    // sort here
    bubbleSort(n, arr);
    cout << "Sorted Array: [";

    // sorted output
    arrOut(n, arr);
    cout << "]" << endl;

    // searching
    int key;
    cout << "Enter key: ";
    cin >> key;

    // indexed key
    int result;
    result = binarySearch(n, key, arr);
    cout << "Index: " << result;
}