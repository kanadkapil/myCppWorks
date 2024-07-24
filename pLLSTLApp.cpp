//without insertion in the middle
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void inHead(list<int> &list1, int val)
{
    list1.push_front(val);
}

void inTail(list<int> &list1, int val)
{
    list1.push_back(val);
}

void delEle(list<int> &list1, int key)
{
    auto i = find(list1.begin(), list1.end(), key);
    if (i != list1.end())
    {
        list1.erase(i);
    }
}

void sortList(list<int> &list1)
{
    list1.sort();
}

bool search(list<int> &list1, int key)
{
    return find(list1.begin(), list1.end(), key) != list1.end();
}

// void display(list<int> &list1)
// {
//     for (auto i = list1.begin(); i != list1.end(); i++)
//     {
//         cout << *i << " -> ";
//     }
//     cout << "NULL" << endl;
// }

void display(const list<int> &list1)
{
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    int value, choice;

    while (true)
    {
        cout << " 1. Insert head" << endl;
        cout << " 2. Insert tail" << endl;
        cout << " 3. Display" << endl;
        cout << " 4. Sort " << endl;
        cout << " 5. Delete " << endl;
        cout << " 6. Search " << endl;
        cout << " 7. exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter head: ";
            cin >> value;
            inHead(list1, value);
            break; // if we dont use break the switch will play on a loop

        case 2:
            cout << "Enter tail: ";
            cin >> value;
            inTail(list1, value);
            break;

        case 3:
            display(list1);
            break;

        case 4:
            sortList(list1);
            cout << "Sorted";
            display(list1);
            break;

        case 5:
            cout << "Enter key to delete: ";
            cin >> value;
            delEle(list1, value);
            break;

        case 6:
            cout << "Search : ";
            cin >> value;
            search(list1, value);
            cout << (search(list1, value) ? "Found":"Not found") << endl;
            break;
        case 7:
            cout << "Exiting .... !?";
            return 0;

        default:
            cout << "Invalid";
        }
    }
}