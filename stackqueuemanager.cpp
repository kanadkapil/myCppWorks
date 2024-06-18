#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class StackQueueManager {
private:
    stack<int> mystack;
    queue<int> myqueue;

public:
    void stackMenu() {
        int choice, ele;

        while (true) {
            // Display stack menu options
            cout << endl;
            cout << "Stack Operations:" << endl;
            cout << "1. Push\n2. Pop\n3. Display\n4. Size \n5. Back to Main Menu" << endl;
            cout << "Enter your choice: ";
            // Get user choice
            cin >> choice;
            cout << endl;

            switch (choice) {
                case 1:
                    // Push element onto the stack
                    cout << "Push Element : ";
                    cin >> ele;
                    mystack.push(ele);
                    cout << ele << " pushed into stack...." << endl;
                    break;

                case 2:
                    // Pop element from the stack
                    if (!mystack.empty()) {
                        cout << mystack.top() << " is popped";
                        mystack.pop();
                    } else {
                        cout << "Stack Underflow!" << endl;
                    }
                    break;

                case 3:
                    // Display elements in the stack
                    if (!mystack.empty()) {
                        cout << "Elements in Stack are : \n";
                        stack<int> temp = mystack;
                        while (!temp.empty()) {
                            cout << temp.top() << "\t";
                            temp.pop();
                        }
                        cout << endl;
                    } else {
                        cout << "No elements in the Stack";
                    }
                    break;

                case 4:
                    cout << "Size of stack: " << mystack.size() << endl;
                    break;

                case 5:
                    // Back to the main menu
                    return;

                default:
                    // Invalid choice
                    cout << "Invalid choice... Please try again." << endl;
            }
        }
    }

    void queueMenu() {
        int choice, ele;

        while (true) {
            // Display queue menu options
            cout << endl;
            cout << "Queue Operations:" << endl;
            cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Size \n5. Front Element\n6. Back Element\n7. Back to Main Menu" << endl;
            cout << "Enter your choice: ";
            // Get user choice
            cin >> choice;
            cout << endl;

            switch (choice) {
                case 1:
                    // Enqueue element into the queue
                    cout << "Enqueue Element: ";
                    cin >> ele;
                    myqueue.push(ele);
                    cout << ele << " enqueued into queue...." << endl;
                    break;

                case 2:
                    // Dequeue element from the queue
                    if (!myqueue.empty()) {
                        cout << myqueue.front() << " is dequeued";
                        myqueue.pop();
                        cout << endl;
                    } else {
                        cout << "Queue Underflow..!!" << endl;
                    }
                    break;

                case 3:
                    // Display elements in the queue
                    if (!myqueue.empty()) {
                        queue<int> temp = myqueue;
                        while (!temp.empty()) {
                            cout << temp.front() << " ";
                            temp.pop();
                        }
                        cout << endl;
                    } else {
                        cout << "No elements in Queue..." << endl;
                    }
                    break;

                case 4:
                    cout << "Size of queue: " << myqueue.size() << endl;
                    break;

                case 5:
                    // Display front element in the queue
                    cout << "Front Item" << endl;
                    if (!myqueue.empty()) {
                        cout << "Front element: " << myqueue.front() << endl;
                    } else {
                        cout << "No elements in Queue..." << endl;
                    }
                    break;

                case 6:
                    // Display back element in the queue
                    cout << "Back Item" << endl;
                    if (!myqueue.empty()) {
                        cout << "Back element: " << myqueue.back() << endl;
                    } else {
                        cout << "No elements in Queue..." << endl;
                    }
                    break;


                case 7:
                    // Back to the main menu
                    return;

                default:
                    // Invalid choice
                    cout << "Invalid choice... Please try again." << endl;
            }
        }
    }
};

int main() {
    StackQueueManager manager;

    int mainChoice;
    while (true) {
        // Display main menu options
        cout << endl;
        cout << "Main Menu:" << endl;
        cout << "1. Stack Operations\n2. Queue Operations\n3. Exit" << endl;
        cout << "Enter your choice: ";
        // Get user choice
        cin >> mainChoice;
        cout << endl;

        switch (mainChoice) {
            case 1:
                // Stack operations
                manager.stackMenu();
                break;

            case 2:
                // Queue operations
                manager.queueMenu();
                break;

            case 3:
                // Exit the program
                cout << "Exiting program.... Bye....!" << endl;
                return 0;

            default:
                // Invalid choice
                cout << "Invalid choice... Please try again." << endl;
        }
    }

    return 0;
}
