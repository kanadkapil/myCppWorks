#include <bits/stdc++.h>  // Include the standard library for input/output and other utilities
using namespace std;

// Define the structure for a Node in the binary search tree (BST)
struct Node
{
    Node *left, *right;  // Pointers to the left and right child nodes
    int data;            // Data stored in the node
    Node(int d)          // Constructor to initialize a new node with a value
    {
        data = d;        // Set the data value
        left = NULL;     // Initialize left child as NULL
        right = NULL;    // Initialize right child as NULL
    }
};

// Function to insert a new value into the binary search tree (BST)
void insert(Node *&root, int val)
{
    // If the tree is empty, create a new node as the root
    if (root == NULL)
    {
        root = new Node(val);  // Allocate a new node with the given value
        return;
    }

    // If the value to be inserted is greater than the current node, insert it in the right subtree
    if (root->data < val)
    {
        insert(root->right, val);  // Recurse to the right child
        return;
    }
    // If the value to be inserted is smaller, insert it in the left subtree
    else if (root->data > val)
    {
        insert(root->left, val);  // Recurse to the left child
        return;
    }
    // No need for an else case, because if the value is equal, we don't do anything
}

// Function for preorder traversal (DLR: Data, Left, Right)
void DLR(Node *root)
{
    // Base case: If the node is NULL, do nothing
    if (root == NULL) return;

    cout << root->data << " ";  // Visit the current node and print its data
    DLR(root->left);            // Recursively visit the left subtree
    DLR(root->right);           // Recursively visit the right subtree
}

int main()
{
    // Create the root node of the tree with the value 4
    Node *root = new Node(4);

    // Insert values into the BST
    insert(root, 2);  // Insert value 2
    insert(root, 5);  // Insert value 5
    insert(root, 1);  // Insert value 1
    insert(root, 3);  // Insert value 3
    insert(root, 6);  // Insert value 6

    // Call preorder traversal (DLR) on the tree and print the result
    DLR(root);  // This will print the preorder traversal of the BST

    return 0;
}
