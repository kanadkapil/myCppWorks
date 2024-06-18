#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToFile() {
    string name;
    int age;
    int id = 1; // Initialize ID to start from 1

    // Open file in read mode to find the last ID
    ifstream infile("Info.txt");
    if (infile) {
        string lastLine;
        while (getline(infile, lastLine)) {
            // Extract the last ID from the last line
            size_t pos = lastLine.find('\t');
            if (pos != string::npos) {
                id = stoi(lastLine.substr(0, pos)) + 1;
            }
        }
        infile.close();
    }

    ofstream file;
    file.open("Info.txt", ios::out | ios::app); // Open file in append mode

    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }

    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore(); // Ignore the newline character left by cin

    for (int i = 1; i <= n; i++) {
        file << id << "\t"; // Write the current ID to the file

        cout << "Enter name: ";
        getline(cin, name);
        file << name << "\t";

        cout << "Enter age: ";
        cin >> age;
        file << age << "\n"; // Use newline instead of tab to separate records
        cin.ignore(); // Ignore the newline character left by cin

        id++; // Increment the ID for the next student
    }

    file.close();

    cout << "Data written to file successfully." << endl;
}

void readFromFile() {
    ifstream infile("Info.txt");
    if (!infile) {
        cout << "Error opening file!" << endl;
        return;
    }

    string line;
    cout << "Contents of Info.txt:\n";
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();
}

int main() {
    int choice;
    while (true) {
        cout << "Student App:" << endl;
        cout << "1. Write to file" << endl;
        cout << "2. Read from file" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character left by cin

        if (choice == 1) {
            writeToFile();
        } else if (choice == 2) {
            readFromFile();
        } else if (choice == 3) {
            cout << "Exiting program..." << endl;
            break;
        } else {
            cout << "Invalid choice!" << endl;
        }

        cout << endl; // Print a newline for better readability
    }

    return 0;
}
