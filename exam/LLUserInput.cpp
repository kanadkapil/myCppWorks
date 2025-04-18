#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {};
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    int n, val;
    cout << "Enter the number of nodes: ";
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 1; i <= n; i++)
    {
        cout << "enter the val of Node "<< i << ": ";
        cin >> val;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    cout << "Linked List: ";
    printList(head);
}