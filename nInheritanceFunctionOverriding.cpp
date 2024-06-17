#include <iostream>
using namespace std;

class Person
{
public:
    virtual void display() // Declare the function as virtual
    {
        cout << "Hello, I am a Person." << endl;
    }
};

class Student : public Person
{
public:
    void display() override // Optionally, use override keyword for clarity
    {
        cout << "Hello, I am a student." << endl;
    }
};

class Teacher : public Person
{
public:
    void display() override // Optionally, use override keyword for clarity
    {
        cout << "Hello, I am a Teacher." << endl;
    }
};

int main(){
    Person p;
    Student s;
    Teacher t;
    p.display();
    s.display();
    t.display();


    // using virtual function 
    // Runtime polymorphism
    Person *ptr;
    ptr = &s; // Pointer of base class pointing to derived class
    ptr->display(); // It will call the display function of student class
    ptr = &t;
    ptr->display(); // It will call the display function of teacher class

    return 0;
}
