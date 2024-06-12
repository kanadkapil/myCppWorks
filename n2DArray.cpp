// binary search without sorting

#include <iostream>
using namespace std;

int main()
{

    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of cols: ";
    cin >> col;

    int arr[row][col];

    cout << "Enter elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "2D Array elements: "<< endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout <<  arr[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;

    // return 0;
}
