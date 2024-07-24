#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &stack1, int val)
{
    stack1.push(val);
}

void del(stack<int> &stack1, int val)
{
    if (!stack1.empty())
    {
        cout << stack1.top() << " is popped.";
        stack1.pop();
    }
    else
    {
        cout << "Empty stack.";
    }
}

void display(const stack<int> &stack1)
{
    for (int i : stack1)
    {
        cout << i << " ";
    }
    cout << endl;
}

void size(stack<int> &stack1)
{
    cout << "Stack size: " << stack1.size() << endl;
}

int main()
{
    int choice, value;

    while (true)
    {
        cout << endl;
        cout << "Stack Operations:" << endl;
        cout << "1. Push\n2. Pop\n3. Display\n4. Size \n5. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        // Get user choice
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
        cout << "Push element: ";
        cin >> value;
        insert(value);
        }
    }
}