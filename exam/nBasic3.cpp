#include <bits/stdc++.h>
using namespace std;

void in(vector<int> &arr, int s){
    for(int i = 0; i < s; i++){
        cin >> arr[i];
    }
}

void out(vector<int> &arr, int s){
    for(int i = 0; i < s; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int s;
    cin >> s;
    vector<int> arr(s); // ✅ Correct: dynamic array using vector
    in(arr, s);
    out(arr, s); 
    return 0;
}
