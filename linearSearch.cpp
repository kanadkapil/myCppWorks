#include <iostream>
#include <vector>
using namespace std;

int ls(int n, int key, vector<int>& arr){
    for (int i=0; i<n; i++){
        if (arr[i]==key) return i;
    }
}

int main()
{
    int n, key;
    cout << "Enter Number of element: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "array: [";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << " ]" << endl;

    cout << "Enter Key: ";
    cin >> key;
    cout << "result: " << ls(n, key, arr);
}