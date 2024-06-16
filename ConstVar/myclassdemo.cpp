#include <iostream>
#include "myclassdemo.h"

using namespace std;


   void MyClassDemo :: display1() const{
        cout << "Constant Obj" << endl;
    }
   void MyClassDemo :: display2() const{
        cout << "non-Constant Obj" << endl;
    }

