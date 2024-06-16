#include <iostream>
#include <conio.h>
#include <stdio.h> // for gets() function
using namespace std;

int main()
{

    cout << "Enter name: ";
    char name[20];

    gets(name);
    cout << "Hello, " << name << "!" << endl;
    system("pause > 0");
    getch();
    return 0;
}
