#include <iostream>
#include <vector>
using namespace std;

int insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
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

    insertionSort(n, arr);
    cout << "sorted: [";
    display(n, arr);
    cout << "]" << endl;

 
}