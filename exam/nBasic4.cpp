#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void intro()
    {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};

class Topper : public Student
{
public:
    void result()
    {
        cout << name << " is a topper." << endl;
    }
};

int main()
{
    Topper t1;
    t1.name = "Alice";
    t1.age = 17;

    t1.intro();
    t1.result();

    return 0;
}
