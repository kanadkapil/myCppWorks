#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin>>num;
    cout<<"result: " << factorial(num);
    return 0;
}