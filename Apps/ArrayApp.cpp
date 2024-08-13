#include <iostream>
#include <vector>
#include <climits> //for int max min
using namespace std;

void arrIn(int n, vector<int> &arr)
{
    cout << "Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrOut(int n, vector<int> &arr)
{
    cout << "Array: [";

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << "]";
    cout << endl; 
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

int linearSearch(int n, int key, vector<int> &arr)
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
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
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1; 
}

void selectionSort(int n, vector<int> &arr) 
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

void insertionSort(int n, vector<int> &arr) 
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

void bubbleSort(int n, vector<int> &arr) 
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

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    vector<int> arr(n);

    while (true)
    {
        int button;
        cout << "Options" << endl
             << "1. Array input " << endl
             << "2. Array Output" << endl
             << "3. Selection Sort " << endl
             << "4. Insertion Sort " << endl
             << "5. Bubble Sort " << endl
             << "6. Binary Search " << endl
             << "7. Linear search" << endl
             << "8. Exit" << endl;
        cin >> button;

        switch (button)
        {
        case 1:
            arrIn(n, arr);
            break; 
        case 2:
            arrOut(n, arr);
            break; 
        case 3:
            selectionSort(n, arr);
            cout << "Sorted Array: ";
            arrOut(n, arr);
            break; 
        case 4:
            insertionSort(n, arr);
            cout << "Sorted Array: ";
            arrOut(n, arr);
            break;
        case 5:
            bubbleSort(n, arr);
            cout << "Sorted Array: ";
            arrOut(n, arr);
            break; 
        case 6:
        {
            int key;
            cout << "Enter key to search: ";
            cin >> key;
            int index = binarySearch(n, key, arr);
            if (index != -1)
                cout << "Element found at index: " << index << endl;
            else
                cout << "Element not found" << endl;
            break;
        }
        case 7:
        {
            int key;
            cout << "Enter key to search: ";
            cin >> key;
            int index = linearSearch(n, key, arr);
            if (index != -1)
                cout << "Element found at index: " << index << endl;
            else
                cout << "Element not found" << endl;
            break; 
        }
        case 8:
            return 0;
            cout << "Invalid option. Please try again." << endl;
        }
    }
}
