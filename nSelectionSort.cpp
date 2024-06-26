#include <iostream>
#include <vector>
using namespace std;

// if  want to use vector
//  const vector<int>& arr

int main()
{

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // int arr[n];

    // arr input
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // unosrted arr
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
}