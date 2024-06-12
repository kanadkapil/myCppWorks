#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, sum = 0;
    cout << "number of students: ";
    cin >> n;
    int students[n];

    // cout << "enter element " << n << ": ";

    for (i = 0; i < n; i++)
    {
        cout << "enter marks of student : " << i + 1 << " : ";
        cin >> students[i];
        sum = sum + students[i];
    }

    cout << " Marks of students : [ ";
    for (i = 0; i < n; i++)
    {
        cout << students[i] << " ";
    }
    cout << "]" << endl;

    cout << "Sum of " << i + 1 << " number of student is: " << sum << endl;

    float avg = (float)sum / n;
    cout << "avg marks: " << avg << endl;

    int max, min;
    max = students[0];
    min = students[0];
    for (i = 1; i < n; i++)
    {
        if (max < students[i])
        {
            max = students[i];
        }
    }
    cout << "max number : " << max << endl;

    for (i = 1; i < n; i++)
    {

        if (min > students[i])
        {
            min = students[i];
        }
    }
    cout << "min number : " << min << endl;
}