#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;    
    struct Node* right;    
};

struct Node* createNode(int data){
    struct Node *n = new Node;
    n->data = data;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

void preOrder(struct Node* root){
    if (root != nullptr)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node* root){
    if (root != nullptr)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

void inOrder(struct Node* root){
    if (root != nullptr)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

int main(){
    struct Node *p = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(5);
    struct Node *p3 = createNode(2);
    struct Node *p4 = createNode(6);
    
    // Linking the nodes
    p->left = p1;
    p->right = p4;
    p1->left = p2;
    p1->right = p3;

    // Traversing the tree
    cout << "PreOrder is: ";
    preOrder(p);
    
    cout << endl << "PostOrder is: ";
    postOrder(p);
    
    cout << endl << "InOrder is: ";
    inOrder(p);
    
    return 0;
}
