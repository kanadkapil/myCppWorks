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
}