#include <iostream>
#include<conio.h>
using namespace std;

class Student{
    public:
    const int admissionFee, examFee;
    int z;

    Student(int x, int y, int z)
    :admissionFee(x), examFee(y) // const got initialized
    {
        // fee = x;
        cout <<"id is: " << x<< endl;

        cout <<"admsnfee is: " << y<< endl;
        cout <<"xmfee is: " << z<< endl;
    }
};

int main(){

    int a,b,c;
        cout << "Enter the id: ";
    cin >> c;
    cout << "Enter the admsnfee: ";
    cin >> a;    
    cout << "Enter the examfee: ";
    cin >> b;
    Student s1(c,a,b);
    system("pause > 0");
    getch();
    return 0;
}

