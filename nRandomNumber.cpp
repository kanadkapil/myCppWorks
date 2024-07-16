#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){
    for(int i=1; i <=5; i++){
        int randomNumber = rand()%10;
        cout << "Random number: " << randomNumber << endl;
    }

}
