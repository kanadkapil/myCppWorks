#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    int id;
    ofstream file;
    file.open("student.txt", ios::out | ios::app); // Open file in append mode

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore(); // Ignore the newline character left by cin

    for (int i = 1; i <= n; i++) {
        cout << "Enter ID: ";
        cin >> id;
        file << id << "\t";
        cin.ignore(); // Ignore the newline character left by cin

        cout << "Enter name: ";
        getline(cin, name);
        file << name << "\t";

        cout << "Enter age: ";
        cin >> age;
        file << age << "\n"; // Use newline instead of tab to separate records
        cin.ignore(); // Ignore the newline character left by cin
    }

    file.close();

    cout << "Data written to file successfully." << endl;
    return 0;
}
