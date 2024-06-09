#include<iostream>
using namespace std;

int main(){

    bool isSunny = true;
    bool isWeekend = false;

    // if condition 
    if(isSunny)
        cout << "no umbrella";
    else
    cout << "take umbrella";
    cout<< endl;

    // tarnary condition 
    isSunny? cout << "NO UMBRELLA" : cout << "TAKE UMBRELLA" << endl;

    // bitwise if else 
    if(isSunny && isWeekend){
        cout << "go to park" << endl;
    }
    else if(isSunny && !isWeekend){
        cout << "go to work" << endl;
    }
    else if(!isSunny && isWeekend){
        cout << "go to park but take umbrella" << endl;
    }
    else{
        cout << "work but umbrella" << endl;
    }

    // nested if else 
    

    system("pause>0");
}