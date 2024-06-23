#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    cout << "Enter the first Subject mark: ";
    cin >> s1;
    cout << "Enter the second Subject mark: ";
    cin >> s2;
    cout << "Enter the third Subject mark: ";
    cin >> s3;

    int avg = (s1 + s2 + s3) / 3;

    if (avg >= 90)
    {
        if (avg > 92)
        {
            cout << "Grade: A+";
        }
        else
        {
            cout << "Grade: A";
        }
    }
    else if (avg >= 80)
    {
        cout << "A-";
    }
    else if (avg >= 70)
    {
        cout << "B";
    }
    else if (avg >= 60)
    {
        cout << "C";
    }
    else if (avg >= 50)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }

    return 0;
}