#include<bits/stdc++.h>
using namespace std;

int add(vector<int> &arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){ 
        sum += arr[i];
    }
    return sum;
}


int main(){
    int x;
    cout << "enter the size of the arr: ";
    cin >> x;
    vector<int> arr(x);

    for(int i = 0; i < x; i++){ 
        cin >> arr[i];
    }
    
    cout << "Sum: " << add(arr, x);
    return 0;
}