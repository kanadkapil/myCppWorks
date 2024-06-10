#include <iostream>
#include <cmath>
// floor ceil need cmath library
using namespace std;
int main()
{
    int a;
    const double pi =3.14;
    // double pwr = pow(2,3);
    // cout <<"power of 2^3: "<<pwr<<endl;
    cout << "Enter a variable: ";
    cin >> a;

    float sqArea=pow(a,2);
    cout << "Area of the square is: "<<sqArea<<endl;

    float cRadius=2*pi*a;
    float cArea=pi*pow(a,2);

    cout << "radius: "<<cRadius<<" "<<"Area: "<<cArea<<endl;


}