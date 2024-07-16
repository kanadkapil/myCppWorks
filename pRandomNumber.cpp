#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){
    // i<=10 numbers to be generated 
    for (int i =1; i<=10; i++){
        int RandomN= rand()%10;
        cout<<RandomN<<endl;
    }
}