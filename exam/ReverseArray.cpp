#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0, end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // vector<int>& arr;
    int n;

    cout << "enter the size of array: ";
    cin>>n;

    int arr[n];


    // arr.resize(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];        
    }

    cout << "Original array: ";
    printArray(arr,n);

    reverseArray(arr,n);

    cout << "Reversed array: ";
    printArray(arr,n);
    return 0;
}