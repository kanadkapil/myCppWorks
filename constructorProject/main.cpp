#include <iostream>
#include "classA.h"

using namespace std;

int main()
{
    Class ob1;
    cout << endl;

    Class *p = &ob1;
    p->display();
    ob1.display();
    return 0; // Add return statement for proper main function termination
}
