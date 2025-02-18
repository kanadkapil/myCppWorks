#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {6,5,78,8,9};
    // Write your code here to find maximum element of the array
    int temp = arr[0];

    for (int a = 1; a < 5; a++)
    {
        if (arr[a] < temp)
        {
            temp = arr[a];
        }
    }
    cout << temp;

    
}