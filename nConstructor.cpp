#include <iostream>
#include <conio.h> // Include conio.h for getch()
using namespace std;

class Student
{
public:
    int id;
    float gpa;
    string name;

    // Constructor to initialize member variables and display them
    Student(int sId, float sGpa, string sName)
    {
        id = sId;
        gpa = sGpa;
        name = sName;
        display(); // Call display function
    }

    void display()
    {
        cout << "Name: " << name << ", ID: " << id << ", GPA: " << gpa << endl;
    }
};

int main()
{
    int numberOfStudents;
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    cin.ignore(); // To clear the input buffer after the number input

    for (int i = 0; i < numberOfStudents; i++)
    {
        int sid;
        float sgpa;
        string sname;

        cout << "\nEnter Name of student " << i + 1 << ": ";
        getline(cin, sname); // Use getline to read the entire line
        cout << "Enter ID of student " << i + 1 << ": ";
        cin >> sid;
        cout << "Enter GPA of student " << i + 1 << ": ";
        cin >> sgpa;
        cin.ignore(); // To clear the input buffer after reading GPA

        // Create Student object using constructor, which will also display details
        Student student(sid, sgpa, sname);
    }

    getch(); // Use getch() to wait for a key press

    return 0;
}
