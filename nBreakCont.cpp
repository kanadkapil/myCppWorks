#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=15; i++){
        
        if(i==2){
            continue;
        }        
        if(i==10){
            break;
        }
        cout << i << endl;
    }
}