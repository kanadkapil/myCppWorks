#include <iostream>
#include <conio.h>// Include conio.h for getch()
using namespace std;

class Student
{
public:
    int id;
    float gpa;
    string name;

    void display()
    {
        cout << "Name: " << name << ", ID: " << id << ", GPA: " << gpa << endl;
    }

    void setValue(int sId, float sGpa, string sName)
    {
        id = sId;
        gpa = sGpa;
        name = sName;
    }
};

int main()
{
    int sid;
    float sgpa;
    string sname;

    cout << "Enter Name of student: ";
    cin.ignore();        // To clear the input buffer
    getline(cin, sname); // Use getline to read the entire line
    // cin >> sname;
    cout << "Enter ID of student: ";
    cin >> sid;
    cout << "Enter GPA of student: ";
    cin >> sgpa;

    Student tup; // Object of Student class
    tup.setValue(sid, sgpa, sname);
    tup.display(); // Display student details

    // this part is with set value *static*
    //  Student Tup; // can use multiple names over here
    //  Tup.id = 02;
    //  Tup.gpa = 3.75;
    //  Tup.display(); // display should be under parametres

 getch(); // Use getch() to wait for a key press

}