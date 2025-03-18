#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right, *left;
    Node(int d)
    {
        data = d;
        right = NULL, left = NULL;
    }
};

void insert(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }
    if (root->left == NULL)
    {
        root->left = new Node(val);
        return;
    }
    else if (root->right == NULL)
    {
        root->right = new Node(val);
        return;
    }
    else
    {
        insert(root->left, val);
    }
}

void levelOrder(Node *root)
{ // traversal
    if (root == NULL)
        return;

    queue<Node *> q; // queue to store nodes for BFS
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        cout << current->data << " "; // print the node's data

        // Push left and right children to the queue if they exist
        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
}


void DLR(Node *root){ // postorder DLR
    if(root == NULL) return;


    cout << root -> data << " ";
    DLR (root -> left);
    DLR (root -> right);

}

int main()
{
    Node *root = NULL;

    int n;
    cout<<"Enter no.of Nodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        insert(root,ele);
    }

    levelOrder(root);
    cout << endl;
    DLR(root);
}
