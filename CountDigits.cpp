#include<iostream>
using namespace std;

int CountDigits(long n){

    if (n == 0){
        return 1;
    }
    int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    return count;
};

int main(){
    long n;
    cout << "enter a number: ";
    cin >> n;
    cout << "Number of digits: " << CountDigits(n) << endl;
}