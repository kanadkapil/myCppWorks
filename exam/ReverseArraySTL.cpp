#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr){
    int start = 0, end = arr.size() - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(const vector<int>& arr){
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr;
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    arr.resize(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr);

    reverseArray(arr);

    cout << "Reversed array: ";
    printArray(arr);

    return 0;
}
