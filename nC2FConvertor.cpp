#include <iostream>
using namespace std;

int main()
{
    double c, f;
    int o;
    cout << "1. Celsius to Fahrenheit." << endl
         << "2. Fahrenheit to Celsius." << endl;
    cin >> o;

    if (o == 1)
    {
        cout << "Enter Celsius: ";
        cin >> c;
        f = c * (9.0 / 5.0) + 32;  
        cout << "Fahrenheit: " << f << endl;
    }
    else if (o == 2)
    {
        cout << "Enter Fahrenheit: ";
        cin >> f;
        c = (f - 32) * 5.0 / 9.0; 
        cout << "Celsius: " << c << endl;
    }
    else
    {
        cout << "Invalid option" << endl;
    }

    return 0;
}
