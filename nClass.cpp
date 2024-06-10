#include <iostream>
using namespace std;

class Car
{
public:
    string Name;
    string Color;
    double Price;
    Car(string name, string color, double price)
    {
        Name = name;
        Color = color;
        Price = price;
    }
    void getInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Color: " << Color << endl;
        cout << "Price: " << Price << endl;
    }
};

int main()
{

    Car myCar2("audi", "white", 7000);
    myCar2.getInfo();

    // normal class calling
    // Car myCar2("audi", "white", 7000);
    // cout << "Name: " << myCar2.Name << endl;
    // cout << "clr: " << myCar2.Color << endl;
    // cout << "price: " << myCar2.Price << endl;

    // this is for normal class calling
    // Car myCar;
    // myCar.Name = "ford";
    // myCar.Color = "red";
    // myCar.Price = 50000;

    // cout << "Name: " << myCar.Name << endl;
    // cout << "clr: " << myCar.Color << endl;
    // cout << "price: " << myCar.Price << endl;

    // Car myCar2;
    // myCar2.Name = "audi";
    // myCar2.Color = "white";
    // myCar2.Price = 70000;

    // cout << "Name: " << myCar2.Name << endl;
    // cout << "clr: " << myCar2.Color << endl;
    // cout << "price: " << myCar2.Price << endl;
    return 0;
}