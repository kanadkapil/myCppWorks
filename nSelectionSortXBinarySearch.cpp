#include <iostream>
#include <vector>
using namespace std;

// Binary Search function should take a vector
int BinarySearch(int n, int key, const vector<int>& arr)
{
    int mid, s = 0, e = n - 1; // start end

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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n); // Use std::vector

    // array input
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // unsorted array (fixed typo in the comment)
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << endl;

    // Selection Sort
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

    // array after sorting
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the key to be searched: "; // Initialize key before searching
    cin >> key;

    int result = BinarySearch(n, key, arr);
    if (result != -1)
    {
        cout << "Searched element found at index: " << result << endl;
    }
    else
    {
        cout << "Searched element not found in the array." << endl;
    }
    
    return 0;
}