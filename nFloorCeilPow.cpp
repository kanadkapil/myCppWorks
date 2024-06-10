#include <iostream>
#include <cmath>
// floor ceil need cmath library
using namespace std;
int main()
{
    double flr = floor(1.2);
    double cl = ceil(1.2);
    double rnd1 = round(1.2);
    double rnd2 = round(1.7);

    cout << "floor: "<<flr<<endl;
    cout << "ceil: "<<cl<<endl;
    cout << "round1: "<<rnd1<<endl;
    cout << "round2: "<<rnd2<<endl;

    const double pi =3.14;
    double pwr = pow(2,3);
    cout <<"power of 2^3: "<<pwr<<endl;
}