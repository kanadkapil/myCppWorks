#include <iostream>
using namespace std;
int main()
{
    int x=1 , y=2;
    int *p1,*p2;
    p1 = &x;
    p2 = &y;

    int sum = *p1 + *p2;
    cout << sum;


}