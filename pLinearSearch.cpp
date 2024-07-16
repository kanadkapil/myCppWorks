#include <iostream>
#include <vector>

using namespace std;

void arrIn(int n, vector<int> &arr)
{
    cout << "Enter elements: ";
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
    cout << endl;
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
int main()
{
    int n;
    vector<int> arr(n);

    cout << "enter number of elements: ";
    cin >> n;

    arrIn(n, arr);
    arrOut(n, arr);
    int key;
    cout << "enter key: ";
    cin >> key;
    int index= linearSearch(n, key, arr);
    cout << "element index: " <<index;

    return 0;
}