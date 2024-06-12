#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    int *p;
    p = &x;
    cout << x << endl;  // val
    cout << *p << endl; // val
    cout << p << endl;  // adrs
    cout << &x << endl; // adrs
}