#include <iostream>
using namespace std;

float sum(float a, float b);
void intro(string name, int age);

int main()
{
    cout << sum(2.2,5)<<endl;
    cout << sum(69,420)<<endl;
    cout << sum(20,400)<<endl;

    intro("tup",23);
    intro("cutie",06);

    system("pause>0");
}

float sum(float a, float b){
    return a+b;
}

void intro(string name, int age){
    cout << "name:  " << name << endl;
    cout << "age: " << age<< endl;
}

