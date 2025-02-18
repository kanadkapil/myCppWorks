#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Print the pattern
    //  *
    //  **
    //  ***
    //  ****
    //  *****
    //  string a = " * * * * *";
    int n = 5;
    for (int i = 0; i <= 4; i++)
    {
        // cout << a << endl;
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    
}