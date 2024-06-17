#include <iostream>
#include <fstream> // Include fstream for file operations
using namespace std;

int main()
{

    string line;
    ifstream file("Text.txt");
    
    // getline(file,line);

    while(getline(file,line)){
        cout << line << endl;
    }

    file.close();

}