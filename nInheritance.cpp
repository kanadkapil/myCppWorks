#include <iostream>
using namespace std;
// https://www.youtube.com/watch?v=dLzMz2Jk_qU
// AchodaBara69@
class Person{
    public:
    string name;
    int age;

    void display1(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student: public Person {
    public:
    int id;

    void display2(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Id: " << id << endl;
    }
};

int main(){
    string a;
    int b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c; // Added cin to read the input values

    Student s1;
    s1.name = a; // Assigning the input values to the student object
    s1.age = b;
    s1.id = c;

    s1.display2(); // Fixed the function call to display2, removed incorrect parameters

    return 0;
}