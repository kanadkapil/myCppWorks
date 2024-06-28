#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int n, vector<int> &arr)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int binarySearch(int n, int key, vector<int> &arr)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

void arrInput(int n, vector<int> &arr)
{
    cout << "Enter Elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrOutput(int n, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    arrInput(n, arr);

    cout << "Array: [";
    arrOutput(n, arr);
    cout << "]" << endl;


    selectionSort(n, arr);
    cout << "Sorted Array: [";
    arrOutput(n, arr);
    cout << "]" << endl;

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    int index = binarySearch(n, key, arr);
    if (index == -1)
    
        cout << "Element not found in the array." << endl;
    
    else
        cout << "Element in index: " << index ;

}