#include <iostream>
#include <vector>
using namespace std;

// if  want to use vector 
//  const vector<int>& arr

int LinearSearch(int n, int key, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
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
    int result = LinearSearch(n, key, arr);
    cout << "Searched Element is: " << result;
}