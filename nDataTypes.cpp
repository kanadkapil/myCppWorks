#include<iostream>
using namespace std;

int main(){
    int age = 25;
    age = 30;
    float weight = 65.6;
    double balance = 126325123567;
    string user = "tup";
    char gender = 'm';
    bool isSunny = false;
    string colors[] = {"red", "blue", "green"};
    
    // Printing values of the variables
    cout << "User: " << user << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Balance: " << balance << endl;
    cout << "Gender: " << gender << endl;
    cout << "Is it sunny? " << (isSunny ? "Yes" : "No") << endl;
    cout << "Favorite color: " << colors[1] << endl;  // "blue" from colors array

    return 0;
}
