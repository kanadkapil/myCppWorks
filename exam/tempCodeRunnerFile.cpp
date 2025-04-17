#include<bits/stdc++.h>
using namespace std;

void in(int arr[], int s){
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
}

void out(int arr[], int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int s;
    cin>>s;
    int arr[s];
    in(arr,s);
    out(arr,s); 
    return 0;
}