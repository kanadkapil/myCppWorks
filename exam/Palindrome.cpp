#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    int left = 0, right = s.length()-1;
    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << palindrome(str);

    if(palindrome(str)){
        cout << "The string is a palindrome.";
    }
    else{
        cout << "The string is not a palindrome.";
    }
}