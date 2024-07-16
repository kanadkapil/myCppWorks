#include <iostream>
using namespace std;

enum EyeColor
{
    red,
    blue,
    green,
    yellow
};
enum fruit
{
    orange = 1,
    apple = 2,
    grape = 3,
    peach = 4
};

int main()
{
    EyeColor eyecolor = blue;

    switch (eyecolor)
    {
    case red:
        cout << "red";
        break;
    case blue:
        cout << "blue";
        break;
    case green:
        cout << "green";
        break;
    case yellow:
        cout << "yellow";
        break;
    }
    system("pause>0");
}
