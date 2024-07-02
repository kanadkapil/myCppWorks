#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter Element " << n << ": ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unsorted Array: [";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << "]" << endl;

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    cout << "Sorted Array: [";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << "]" << endl;

    // Binary Search
    int s = 0;
    int e = n - 1;
    int key;
    cout << "Enter key: ";
    cin >> key;
    bool found = false;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }

    if (!found)
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}