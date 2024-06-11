#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Java is fun" << endl << "1. Yes \t 2.No" << endl << "3. Maybe \t 4. Maybe not"<<endl;
    cin >> a;
    if (a == 1){
        cout << "correct";
    }
    else{
        cout << "Wrong Answer";
    }

    return 0;
}