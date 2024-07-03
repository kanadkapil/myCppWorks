#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void insertHead(list<int> &list1, int data)
{
    list1.push_front(data);
}

void insertTail(list<int> &list1, int data)
{
    list1.push_back(data);
}

void insertAfter(list<int> &list1, list<int>::iterator it, int data)
{
    if (it == list1.end())
    {
        cout << "the given itrator is invalid:";
        return;
    }
    list1.insert(it, data); //  list1.insert(next(it), data);
}

void deleteNode(list<int> &list1, int key)
{
    list1.remove(key);
}

bool search(list<int> &list1, int key)
{
    auto it = find(list1.begin(), list1.end(), key) != list1.end();
}

void sortList(list<int> &list1)
{
    list1.sort();
}

void display(list<int> &list1)
{
    for (auto it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    insertHead(list1, 1);
    insertHead(list1, 2);
    insertHead(list1, 3);
    insertTail(list1, 4);
    insertTail(list1, 5);
    display(list1);

    insertAfter(list1, next(list1.begin(), 2), 25);
    display(list1);

    deleteNode(list1, 3);
    display(list1);

        cout << "Searching for 30: " << (search(list1, 1) ? "Found" : "Not Found") << endl;

    sortList(list1);
    cout << "List after sorting: ";
    display(list1);
}