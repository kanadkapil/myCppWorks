#include<bits/stdc++.h>
using namespace std;

void sort_search(){
    vector<int> v = {6,7,3,5,2,1,8};
    sort(v.begin(), v.end());

    if(binary_search(v.begin(), v.end(), 10)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
}
int main(){
    sort_search();
    return 0;
}