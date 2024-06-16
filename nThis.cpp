#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    Student(string name){
        this->name = name;
    }
    void display(){
        cout << "name: " << name;
    }
};

int main(){
    Student s1("John");
    s1.display();
    // getch();
}