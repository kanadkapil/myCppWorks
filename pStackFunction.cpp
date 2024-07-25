#include <iostream>
#include <stack>
using namespace std;

void push(stack<int> &s, int val)
{
    cout << "Push elements: ";
    cin >> val;
    s.push(val);
    cout << val << " is pushed.";
}

void pop(stack<int> &s, int val)
{
    if (!s.empty())
    {
        cout << s.top() << " is popped.";
        s.pop();
    }
    else
    {
        cout << "stack overflow.";
    }
}

void display(const stack<int> &s)
{
    stack<int> temp = s;
    if (temp.empty())
    {
        cout << "Empty stack.";
    }
    else
    {
        cout << "Stack: ";
        while (!s.empty())
        {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
}

int size(const stack<int> &s)
{
    return s.size();
}

int main()
{
    stack<int> s;
    int choice, val;

    while (true)
    {
        cout << endl;
        cout << "*Stack Operations* " << endl;
        cout << "1. Push " << endl;
        cout << "2. Pop " << endl;
        cout << "3. Size " << endl;
        cout << "4. Display " << endl;
        cout << "5. Exit. " << endl;

        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            push(s, val);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << "Stack size: " << size(s) << endl;
            break;
        case 4:
            display(s);
            break;
        case 5:
            cout << "Exiting......";
            break;
        default:
            cout << "Invalid.";
        }
    }
}