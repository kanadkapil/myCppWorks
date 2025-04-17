#include <bits/stdc++.h>
using namespace std;

void findMaxMin(int arr[], int n, int &maxval, int &minval) {
    maxval = arr[0];
    minval = arr[0];
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxval) {
            maxval = arr[i];
        }
        if(arr[i] < minval) {
            minval = arr[i];
        }
    }
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxarr, minarr;

    findMaxMin(arr, n, maxarr, minarr);

    cout << "Max: " << maxarr << endl;
    cout << "Min: " << minarr << endl;

    return 0;
}
