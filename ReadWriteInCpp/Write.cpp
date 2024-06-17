#include <iostream>
#include <fstream> // Include fstream for file operations
using namespace std;

int main()
{

    string texts;
    ofstream file;

    // this part will over write
    // file.open("Text.txt");

    // this part will append
    file.open("Text.txt", ios::out|ios::app);

    cout << "Enter your text: ";
    getline(cin, texts);

    file << texts <<endl;
    file.close();
}