#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void insertAtBeginning(list<int>& myList, int newData) {
    myList.push_front(newData);
}

void insertAtEnd(list<int>& myList, int newData) {
    myList.push_back(newData);
}

void insertAfter(list<int>& myList, list<int>::iterator it, int newData) {
    if (it == myList.end()) {
        cout << "The given iterator is invalid" << endl;
        return;
    }
    myList.insert(next(it), newData);
}

void deleteNode(list<int>& myList, int key) {
    auto it = find(myList.begin(), myList.end(), key);
    if (it != myList.end()) {
        myList.erase(it);
    }
}

bool search(const list<int>& myList, int key) {
    return find(myList.begin(), myList.end(), key) != myList.end();
}

void sortList(list<int>& myList) {
    myList.sort();
}

void printList(const list<int>& myList) {
    for (int data : myList) {
        cout << data << " ";
    }
    cout << endl;
}

int main() {
    list<int> myList;
    int choice, value, position;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert after position\n";
        cout << "4. Delete node by key\n";
        cout << "5. Search for node\n";
        cout << "6. Sort list\n";
        cout << "7. Print list\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                insertAtBeginning(myList, value);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                insertAtEnd(myList, value);
                break;
            case 3:
                cout << "Enter position to insert after (0-based index): ";
                cin >> position;
                cout << "Enter value to insert: ";
                cin >> value;
                if (position >= 0 && position < myList.size()) {
                    auto it = next(myList.begin(), position);
                    insertAfter(myList, it, value);
                } else {
                    cout << "Invalid position" << endl;
                }
                break;
            case 4:
                cout << "Enter key to delete: ";
                cin >> value;
                deleteNode(myList, value);
                break;
            case 5:
                cout << "Enter value to search for: ";
                cin >> value;
                cout << (search(myList, value) ? "Found" : "Not Found") << endl;
                break;
            case 6:
                sortList(myList);
                cout << "List sorted." << endl;
                break;
            case 7:
                printList(myList);
                break;
            case 8:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
