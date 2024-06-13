#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
    int id;
    float gpa;
};

int main()
{
    Student Abul;
    Abul.id = 01;
    Abul.gpa = 3.44;

    cout << Abul.id << " " << Abul.gpa << endl;

    Student Tup;
    Tup.id = 02;
    Tup.gpa = 3.75;

    cout << Tup.id << " " << Tup.gpa << endl;

    getch();
}