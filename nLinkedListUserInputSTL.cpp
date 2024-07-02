#include <iostream>
#include <list>
using namespace std;

void insertHead(list<int> &list1, int val)
{
    list1.push_front(val);
}

void insertTail(list<int> &list1, int val)
{
    list1.push_back(val);
}

void display(list<int> &list1)
{
    for (auto i = list1.begin(); i != list1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "NULL" << endl;
}

int main()
{
    list<int> list1;
    int value, choice;

    while (true)
    {
        cout << "Menu:\n";
        cout << "1. Insert at head\n";
        cout << "2. Insert at tail\n";
        cout << "3. Display list\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            insertHead(list1, value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            insertTail(list1, value);
            break;

        case 3:
            display(list1);
            break;

        case 4:
            cout << "Exiting....!";
            return 0;

        default:
            cout << "Invalid choice";
        }
    }
}