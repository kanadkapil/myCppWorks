#include <iostream>
using namespace std;

const int MAX_ROW = 100;
const int MAX_COL = 100;

void ArrIn(int arr[][MAX_COL], int row, int col);
void ArrOut(int arr[][MAX_COL], int row, int col);
int main()
{
    int r, c;
    cout << "enter array row : ";
    cin >> r;
    cout << "enter array col : ";
    cin >> c;

    int marr[MAX_ROW][MAX_COL];

    ArrIn(marr, r, c);
    ArrOut(marr, r, c);

    return 0;
}

void ArrIn(int arr[][MAX_COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter elements: ";
            cin >> arr[i][j];
        }
    }
}
void ArrOut(int arr[][MAX_COL], int row, int col)
{
    cout << "2D Array elements: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}