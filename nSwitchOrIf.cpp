#include <iostream>
using namespace std;

void Condition(char button)
{
    if (button == '1')
        cout << "One" << endl;
    else if (button == '2')
        cout << "Two" << endl;
    else if (button == '3')
        cout << "Three" << endl;
    else if (button == '4')
        cout << "Four" << endl;
    else if (button == '5')
        cout << "Five" << endl;
    else
        cout << "invalid input" << endl;
}

void Switches(char button)
{
    switch (button)
    {
    case '1':
        cout << "One" << endl;
        break;
    case '2':
        cout << "Two" << endl;
        break;
    case '3':
        cout << "Three" << endl;
        break;
    case '4':
        cout << "Four" << endl;
        break;
    case '5':
        cout << "Five" << endl;
        break;
    default:
        cout << "invalid input" << endl;
    }
}

int main(){
    char button;
    cout << "Enter a number: ";
    cin >> button;
    Condition(button);
    Switches(button);
}