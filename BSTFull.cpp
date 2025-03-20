#include <bits/stdc++.h>
using namespace std;

// Define the structure of a BST node
struct Node
{
    Node *left, *right; // Pointers to the left and right children
    int data;           // Data stored in the node
    Node(int d)         // Constructor to initialize a node
    {
        data = d;
        left = right = NULL; // Initialize children to NULL
    }
};

// Function to insert a value into the BST
void insert(Node *&root, int val)
{
    if (root == NULL) // If the tree is empty, create a new node
    {
        root = new Node(val);
        return;
    }

    // If the value is greater than the current node's data, insert into the right subtree
    if (root->data < val)
    {
        insert(root->right, val);
    }
    // If the value is less than the current node's data, insert into the left subtree
    else if (root->data > val)
    {
        insert(root->left, val);
    }
    // If the value is equal to the current node's data, do nothing (assuming no duplicates)
}

// Function to find the node with the minimum value in a subtree
Node *findMin(Node *root)
{
    while (root->left != NULL) // Traverse to the leftmost node
    {
        root = root->left;
    }
    return root; // Return the node with the minimum value
}

// Function to delete a node with a given value from the BST
Node *deleteNode(Node *root, int val)
{
    if (root == NULL) // If the tree is empty, return NULL
    {
        return root;
    }

    // Search for the node to be deleted
    if (val < root->data) // If the value is less than the current node's data, search in the left subtree
    {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->data) // If the value is greater than the current node's data, search in the right subtree
    {
        root->right = deleteNode(root->right, val);
    }
    else // If the value is found
    {
        // Case 1: Node has no children (leaf node)
        if (root->left == NULL && root->right == NULL)
        {
            delete root; // Delete the node
            return NULL; // Return NULL to update the parent's pointer
        }
        // Case 2: Node has only one child
        else if (root->left == NULL) // Node has only a right child
        {
            Node *temp = root->right; // Store the right child
            delete root;              // Delete the node
            return temp;             // Return the right child to update the parent's pointer
        }
        else if (root->right == NULL) // Node has only a left child
        {
            Node *temp = root->left; // Store the left child
            delete root;             // Delete the node
            return temp;             // Return the left child to update the parent's pointer
        }
        // Case 3: Node has two children
        else
        {
            // Find the inorder successor (smallest node in the right subtree)
            Node *temp = findMin(root->right);

            // Copy the inorder successor's data to the current node
            root->data = temp->data;

            // Delete the inorder successor from the right subtree
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root; // Return the updated root of the subtree
}

// Function to perform a preorder traversal (DLR) of the BST
void DLR(Node *root)
{
    if (root == NULL) // If the tree is empty, return
    {
        return;
    }

    // Print the current node's data
    cout << root->data << " ";

    // Recursively traverse the left subtree
    DLR(root->left);

    // Recursively traverse the right subtree
    DLR(root->right);
}

// Function to delete the entire tree and free memory
void deleteTree(Node *root)
{
    if (root == NULL) // If the tree is empty, return
    {
        return;
    }

    // Recursively delete the left subtree
    deleteTree(root->left);

    // Recursively delete the right subtree
    deleteTree(root->right);

    // Delete the current node
    delete root;
}

int main()
{
    Node *root = NULL; // Initialize the root of the BST to NULL
    int n, value;

    // Ask the user for the number of nodes
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Validate the number of nodes
    if (n <= 0)
    {
        cout << "Invalid number of nodes. Exiting..." << endl;
        return 1; // Exit the program if the input is invalid
    }

    // Insert values into the BST
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter the value for BST node " << i + 1 << ": ";
        cin >> value;
        insert(root, value);
    }

    // Perform a preorder traversal (DLR) and print the tree
    cout << "DLR (Preorder Traversal) before deletion: ";
    DLR(root);
    cout << endl;

    // Ask the user for a value to delete
    int deleteValue;
    cout << "Enter the value to delete: ";
    cin >> deleteValue;

    // Delete the node with the given value
    root = deleteNode(root, deleteValue);

    // Perform a preorder traversal (DLR) after deletion and print the tree
    cout << "DLR (Preorder Traversal) after deletion: ";
    DLR(root);
    cout << endl;

    // Free the allocated memory by deleting the entire tree
    deleteTree(root);

    return 0;
}
