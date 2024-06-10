#include <iostream>
using namespace std;

class Car
{
private:
    string Name;
    string Color;
    double Price;
    
public:
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

    return 0;
    system("pause>0");
}