#include<iostream>
using namespace std;

class Fact{
    public:
    int factorial(int n){
        if (n<=1){
        return 1;
        }else{
            return n*factorial(n-1);
        }
    }
};

int main(){

    Fact fact;
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << fact.factorial(num);


}