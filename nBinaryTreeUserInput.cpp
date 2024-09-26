#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* n = new Node;
    n->data = data;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

// Function to insert nodes into the tree (level-order)
struct Node* insertNode(struct Node* root, int data) {
    if (root == nullptr) {
        return createNode(data);
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        struct Node* temp = q.front();
        q.pop();

        if (!temp->left) {
            temp->left = createNode(data);
            break;
        } else {
            q.push(temp->left);
        }

        if (!temp->right) {
            temp->right = createNode(data);
            break;
        } else {
            q.push(temp->right);
        }
    }
    return root;
}

// Pre-order traversal
void preOrder(struct Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Post-order traversal
void postOrder(struct Node* root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

// In-order traversal
void inOrder(struct Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

int main() {
    struct Node* root = nullptr;
    int numNodes, data;

    // Taking user input for the number of nodes
    cout << "Enter the number of nodes: ";
    cin >> numNodes;

    // Taking user input for each node's value and constructing the tree
    for (int i = 0; i < numNodes; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> data;
        root = insertNode(root, data);
    }

    // Performing tree traversals
    cout << "PreOrder Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "PostOrder Traversal: ";
    postOrder(root);
    cout << endl;

    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;

    return 0;
}
