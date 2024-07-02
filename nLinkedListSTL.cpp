#include<iostream>
#include<list>
using namespace std;

void insertHead(list<int> &lst, int val){
    lst.push_front(val);
}

void insertTail(list<int> &lst, int val){
    lst.push_back(val);
}

void display(list<int> &lst){
    for(auto i=lst.begin();i!=lst.end(); ++i){
        cout <<*i << " ";
    }
    cout << "NULL" <<endl;
}

int main(){
    list<int> lst;
    insertTail(lst,1);
    insertTail(lst,2);
    insertHead(lst,7);
    insertTail(lst,1);
    display(lst);
}