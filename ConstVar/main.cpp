#include <iostream>
#include "myclassdemo.h"

using namespace std;

int main()
{
    const MyClassDemo ob;
    ob.display1();

    MyClassDemo ob2;
    ob2.display2();
    const int x = 10;
    cout << x;
    
    return 0;
}
