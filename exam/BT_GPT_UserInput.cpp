#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor with initializer list
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to build tree from user input
Node* buildTree() {
    int val;
    cout << "Enter value (-1 for NULL): ";
    cin >> val;

    if (val == -1) return nullptr;

    Node* node = new Node(val);
    cout << "Enter left child of " << val << endl;
    node->left = buildTree();

    cout << "Enter right child of " << val << endl;
    node->right = buildTree();

    return node;
}

// Inorder Traversal (Left → Root → Right)
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal (Root → Left → Right)
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal (Left → Right → Root)
void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    // Build the tree from user input
    cout << "Build the binary tree:" << endl;
    Node* root = buildTree();

    // Display traversals
    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << "\nPostorder Traversal: ";
    postorder(root);

    cout << endl;
    return 0;
}
