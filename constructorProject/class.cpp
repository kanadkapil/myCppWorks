#include <iostream>
#include "classA.h"

using namespace std;

Class::Class()
{
    cout << "inside the constructor." << endl;
}
Class::~Class()
{
    cout << "inside the destructor." << endl;
}

void Class::display()
{
    cout << "this is display. " << endl;
}
