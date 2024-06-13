#include <iostream>
using namespace std;

void Sq(int n)
{
    int sq = n * n;
    cout << "Square of " << n << " : " << sq;
}

int main()
{
    int a, b, c;
    cout << "enter number: " << endl;
    cin >> a;
    cout << "enter number: " << endl;
    cin >> b;
    cout << "enter number: " << endl;
    cin >> c;

    Sq(a);
    Sq(b);
    Sq(c);
}