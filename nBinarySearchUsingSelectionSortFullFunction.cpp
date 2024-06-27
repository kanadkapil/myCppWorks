#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(int n, vector<int> &arr)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int BinarySearch(int n, int key, vector<int> &arr)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            // cout << "Element found at index " << mid << endl;
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }

    return -1;
}

void input(int n, vector<int> &arr)
{
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int n, vector<int> &arr)
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
    input(n, arr);
    cout << "unsorted: [";
    display(n, arr);
    cout << "]" << endl;

    SelectionSort(n, arr);
    cout << "sorted: [";

    display(n, arr);
    cout << "]" << endl;

    cout << "Enter key: ";
    int key;
    cin >> key;

    int index = BinarySearch(n, key, arr);
    cout << "Found Index: " << index << endl;
}