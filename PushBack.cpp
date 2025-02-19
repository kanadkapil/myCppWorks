#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>res;
    
    int a[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        vector<int>ans;
        for(int j=i;j<5;j++){
            ans.push_back(a[j]);
        }
        res.push_back(ans);
    }
    for(auto it : res){
        cout<<"[";
        for(auto it2 : it){
            cout<<it2;
        }
        cout<<"]";
        
    }
}
