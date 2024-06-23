#include <iostream>
using namespace std;

int main()
{
    char ch; // +-*/
    double num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> ch;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch(ch){
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/':
        if(num2 != 0)
        cout << num1 << " / " << num2 << " = " << num1 /num2;
        else
        cout << "Error! Division by zero is not allowed.";
        break;
        default:
        cout << "Error! Invalid operator.";
        }
}