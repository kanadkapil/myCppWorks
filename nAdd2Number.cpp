#include<iostream>
using namespace std;

class Add{
    public:
    Add(int a, int b){
        cout << "Sum is: " << a + b << endl;
    }
};

int main(){
    int x,y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    Add obj(x,y);
}