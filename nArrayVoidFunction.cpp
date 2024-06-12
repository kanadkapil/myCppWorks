#include <iostream>
using namespace std;

void ArrIn(int arr[], int size);
void ArrOut(int arr[], int size);
int main()
{
    int n;
    cout << "enter array size : ";
    cin >> n;

    int arr[n];

    ArrIn(arr, n);
    ArrOut(arr, n);

    return 0;
}

void ArrIn(int arr[], int size){
    for (int i=0;i<size;i++){
        cout << "element " << i+1 << " : " ;
        cin >>arr[i];
    }
}void ArrOut(int arr[], int size){
    cout << "Array : [ ";
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << "]";
}