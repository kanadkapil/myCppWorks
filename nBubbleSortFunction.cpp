#include <iostream>
#include <vector>
using namespace std;

int bubblSort(int n, vector<int> &arr)
{
    int counter=1;
    while(counter<n){
        for (int i=0;i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

}

void input(int n, vector<int> &arr)
{
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int n, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    input(n, arr);

    cout << "unsorted: [";
    display(n, arr);
    cout << "]" << endl;

    bubblSort(n, arr);
    cout << "sorted: [";
    display(n, arr);
    cout << "]" << endl;

 
}