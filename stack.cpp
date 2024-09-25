#include<iostream>
#include<stack>

using namespace std;

int main() {
    // Creating an empty stack
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Create a temporary stack to reverse the order
    stack<int> tempStack;

    // Displaying the top element of the stack
    cout << "Top element: " << myStack.top() << endl;

    // Popping elements from the stack
    myStack.pop();

    // Displaying the size of the stack
    cout << "Size of stack: " << myStack.size() + 1 << endl;

    // Checking if the stack is empty
    cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;

    while (!myStack.empty()) {
        tempStack.push(myStack.top());
        myStack.pop();
    }

    // Displaying the full element output of the stack in reverse order
    cout << "Stack elements: ";
    while (!tempStack.empty()) {
        cout << tempStack.top();
        tempStack.pop();
        if (!tempStack.empty()) {
            cout << ", ";
        }
    }
    cout << endl;



    return 0;

}

                //     if (!myStack.empty()) {
                //     cout << "Elements in Stack are : \n";
                //     stack<int> tempStack = myStack;
                //     while (!tempStack.empty()) {
                //         cout << tempStack.top() << "\t";
                //         tempStack.pop();
                //     }
                //     cout << endl;  // Add a newline after printing stack elements
                // } else {
                //     cout << "No elements in the Stack" << endl;
                // }

                // break;
