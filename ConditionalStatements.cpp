#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 1 , b = 5 , c = 5;
    // Find the max of these three numbers using if else
    //write your code here

    if(a>b && a>c){
        cout << "a";
    } else if ( b>=a && b>=c){
        cout << "b";
    }
    if ( c>=a && c>=b){
        cout << "c";
    } 
}