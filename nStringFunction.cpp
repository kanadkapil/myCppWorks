#include <iostream>
#include <conio.h>
#include <stdio.h> // for gets() function
#include <cstring> // for string functions 
// tutorial of this in Bengali
// https://www.youtube.com/watch?v=7dCXFzPGzKI&list=PLgH5QX0i9K3q0ZKeXtF--CZ0PdH1sSbYL&index=78
using namespace std;

int main()
{
    // string length
    cout << "Enter name: ";
    char name[20];
    gets(name);
    int len = strlen(name);

    strupr(name);
    // strlwr(name);
    // strcmp(a,b);
    // strcpy(a,b);
    // strcat(a,b);

    cout << "Hello, " << name << "!" << endl;
    cout << "letter: " << len << endl;


    // string class here 
    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1; // string copy
    string str4 = str1 + " " + str2; // string concatenation
    int length = str1.size(); // for string length
    cout << "str3 : " << str3 << endl;
    cout << "str4 : " << str4 << endl;
    cout << "Length of str1 : " << length << endl;

   

    system("pause > 0");
    getch();
    return 0;
}
