#include <iostream>
using namespace std;

const int MAX_ROW = 100;
const int MAX_COL = 100;

void arrInput(int arr[][MAX_COL], int row, int col)
{
                cout << "Enter elements: ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void arrOutput(int arr[][MAX_COL], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
            cout << "2D Array elements: " << endl;
        for (int j = 0; j < col; j++)
        {
            cout << " " << arr[i][j] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[MAX_ROW][MAX_COL];
    int row, col;
    cout << "Enter Row: ";
    cin >> row;
    cout << "Enter Col: ";
    cin >> row;

    arrInput(arr, row, col);
    arrOutput(arr, row, col);
}