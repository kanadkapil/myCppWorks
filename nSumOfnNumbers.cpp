#include <iostream>
using namespace std;

// for loop
void forSum(int n)
{

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = +sum + i;
    }
    cout << "Sum: " << sum << endl;
}

// while loop
void whileSum(int n)
{
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum = +sum + i;
        i++;
    }
    cout << "Sum: " << sum << endl;
}

int main()
{
    int n;
    cout << "enter number of digits: ";
    cin >> n;
    forSum(n);
    whileSum(n);
}