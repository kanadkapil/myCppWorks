#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Create a queue of integers
    queue<int> myQueue;

    // Enqueue elements onto the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Display the front element of the queue
    cout << "Front element: " << myQueue.front() << endl;

    // Dequeue an element from the queue
    myQueue.pop();

    // Display the size of the queue
    cout << "Size of queue: " << myQueue.size() << endl;

    // Check if the queue is empty
    cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    return 0;
}