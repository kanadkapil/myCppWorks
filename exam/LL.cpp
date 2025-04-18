#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    // Create nodes and link them
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // Link nodes
    head->next = second;
    second->next = third;

    // Print the linked list
    cout << "Linked List: ";
    printList(head);
}