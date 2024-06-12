#include <iostream>
using namespace std;

void sum(int a, int b);
void mul(int a, int b);
void sub(int a, int b);
void divi(int a, int b);


int main()
{
    int n1, n2;

    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;

    sum(n1, n2);
    mul(n1, n2);
    sub(n1, n2);
    divi(n1, n2);
}

void sum(int a, int b)
{
    int result = a + b;
    cout << "sum: " << result << endl;
}

void mul(int a, int b)
{
    int result = a * b;
    cout << "mul: " << result << endl;
}

void sub(int a, int b)
{
    int result = a - b;
    cout << "sub: " << result << endl;
}

void divi(int a, int b)
{
    int result;
    if (b==0)
    {
        cout << "error";
    }
    else
    {
        result = (float)a/b;
            cout << "divi: " << result << endl;
    }

}