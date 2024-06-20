#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> stk;
    stack<int> temp;

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);

    // show top element 
    cout << "Top element: " << stk.top() << endl;

    // popping elements from stack 
    stk.pop();

    cout << "Size of stack: " << stk.size() + 1 << endl;

    // check if the stack is empty or not
    cout << "Is the stack empty? " << (stk.empty()? "yes" : "no") << endl;
    
    // print all the elements in the stack
    while(!stk.empty()) {
        temp.push(stk.top());
        stk.pop();
    }

    // display full elements inside stack 
    cout << "Stack elements: ";
    while (!temp.empty()) {
        cout << temp.top() << ' ';
        temp.pop();
        if(!temp.empty()){
            cout << ", " ;
        }
    }

    return 0;

}