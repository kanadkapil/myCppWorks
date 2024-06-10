#include<iostream>
using namespace std;

int main(){
int numb[5]={1,2,3,4,5};
cout << numb << endl;
cout << numb[3] << endl;

int* numbPointer = numb;
cout << "pointing to "<<numb<< ", value: " << *numb << endl;
    
}