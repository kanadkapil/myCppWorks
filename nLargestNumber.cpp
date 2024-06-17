#include <iostream>
using namespace std;

class LargestNumber
{
public:
    int largest(int a, int b, int c)
    {
        if (a >= b && a >= c)
        {
            return a;
        }
        else if (b >= a && b >= c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }

    void display(int x, int y, int z)
    {
        cout << "The largest number is: " << largest(x, y, z) << endl;
    }
};

int main()
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    LargestNumber obj;
    obj.display(x, y, z);

    return 0;
}
