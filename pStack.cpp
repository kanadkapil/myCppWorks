#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack;
    int choice, val;
    while (true)
    {
        cout << "Options..... " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display " << endl;
        cout << "4. Size " << endl;
        cout << "5. Return " << endl;
    }

    switch (choice)
    {

    case 1:
        cout << "Push Element: ";
        cin >> val;
        myStack.push(val);
        cout << val << " in pushed";
        break;
    case 2:
    if(!myStack.empty()){
        cout << myStack.top() << " is popped";
        myStack.pop();
    }
    else{
        cout << "Stack overflow..."
    }
        break;

    case 3:
        if(!myStack.empty()){
            cout << "Stack: ";
            stack<int> temp = myStack;
            while(!temp.empty()){
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }
        else{
            cout << "Empty stack...";
        }
        break;
    case 4:
        cout << "Stack size: " << myStack.size();
        break;
    case 1:
        break;
    }
}
