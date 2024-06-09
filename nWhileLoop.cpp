#include <iostream>
using namespace std;

int main()
{
    cout << "while: \n";
    int count = 1;
    while (count <= 10)
    {
        cout << count << endl;
        count++;
    }

    cout << "do while: \n";
    count = 1; // Initialize count before the do-while loop
    do
    {
        cout << count << endl;
        count++;
    } while (count <= 10)

    // return 0;
    // system("pause>0"); 
}