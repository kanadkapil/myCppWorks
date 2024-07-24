#include <iostream>
#include <stack>
// is there any way to use algo or .sort 
using namespace std;

int main()
{

    stack<int> myStack;
    int choice, val;
    while (true)
    {
        cout << endl;
        cout << "Stack Operations:" << endl;
        cout << "1. Push\n2. Pop\n3. Display\n4. Size \n5. Back to Main Menu" << endl;
        cout << "7. Sort" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Push elements: ";
            cin >> val;
            myStack.push(val);
            cout << val << " is pushed";
            ;
            break;

        case 2:
            if (!myStack.empty())
            {
                cout << myStack.top() << " is popped.";
                myStack.pop();
            }
            else
            {
                cout << "stack overflow." << endl;
            }
            break;

        case 3:

            // while (!myStack.empty())
            // {
            //     if (!myStack.empty())
            //     {
            //         cout << "Elements: " << myStack.top();
            //         myStack.top()++;
            //     }
            // }

            if (!myStack.empty())
            {
                cout << "Elements in Stack are : \n";
                stack<int> temp = myStack;
                while (!temp.empty())
                {
                    cout << temp.top() << "\t";
                    temp.pop();
                }
                cout << endl;
            }
            else
            {
                cout << "No elements in the Stack";
            }

            break;

        case 4:
            cout << "Stack size: " << myStack.size();
            break;
            // case 7:
            //     myStack.sort();
            //     break;

        case 5:
        cout << "Exiting.........!";
            return 0;

        default:
            cout << "invalid input" << endl;
        }
    }
}