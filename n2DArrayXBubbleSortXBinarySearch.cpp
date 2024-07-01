#include <iostream>
#include <vector>
using namespace std;

const int MAX_ROW = 100;
const int MAX_COL = 100;


void arrIn(int arr[][MAX_COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void arrOut(int arr[][MAX_COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void bubbleSort(int arr[][MAX_COL], int row, int col)
{
    int size = row * col;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            int r1 = j / col;
            int c1 = j % col;
            int r2 = (j + 1) / col;
            int c2 = (j + 1) % col;

            if (arr[r1][c1] > arr[r2][c2])
            {
                int temp = arr[r1][c1];
                arr[r1][c1] = arr[r2][c2];
                arr[r2][c2] = temp;
            }
        }
    }
}

pair<int, int> binarySearch(int arr[][MAX_COL], int row, int col, int key)
{
    int s = 0;
    int e = row * col - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int midRow = mid / col;
        int midCol = mid % col;

        if (arr[midRow][midCol] == key)
            return {midRow, midCol};
        else if (arr[midRow][midCol] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return {-1, -1};
}

int main()
{
    int r, c;
    cout << "Enter array row: ";
    cin >> r;
    cout << "Enter array col: ";
    cin >> c;

    int marr[MAX_ROW][MAX_COL];

    arrIn(marr, r, c);
    cout << "Unsorted 2D array: " << endl;
    arrOut(marr, r, c);

    bubbleSort(marr, r, c);
    cout << "Sorted 2D array: " << endl;
    arrOut(marr, r, c);

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    pair<int, int> index = binarySearch(marr, r, c, key);
    if (index.first != -1)
    {
        cout << "Element found at index: [" << index.first << "][" << index.second << "]" << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

