#include <iostream>
#include <vector>

using namespace std;

int bina(int n, int key, vector<int>& arr)
{
    int s=0, e, mid;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) s=mid+1;
        else e=mid-1;
    }
}
int main()
{
    int n, key;
    cout << "enter number of ele: ";
    cin >> n;

    vector<int> arr(n);

    cout << "enter ele: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "arr=  ";

        for(int i=0; i<n; i++){
        cout << arr[i];
    }

    cout << " enter key = ";
    cin >> key;
    cout << "result" << bina(n, key, arr);

}