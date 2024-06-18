#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile("student.txt");
    if (!infile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    cout << "Contents of student.txt:\n";
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    return 0;
}
