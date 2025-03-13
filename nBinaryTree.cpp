#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *right, *left;
    Node (int d){
        data = d;
        right = NULL;
        left =NULL;
    }
};

void levelOrder(Node *root) { // traversal
    if (root == NULL) return;

    queue<Node *> q; // queue to store nodes for BFS
    q.push(root);

    while (!q.empty()) {
        Node *current = q.front();
        q.pop();
        
        cout << current->data << " ";  // print the node's data
        
        // Push left and right children to the queue if they exist
        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }

}

int main(){
    Node *r = new Node(1);

    Node *rl = new Node(2);
    Node *rr = new Node(3);

    Node *rll = new Node(4);
    Node *rlr = new Node(5);
    Node *rrl = new Node(6);
    Node *rrr = new Node(7);

    r -> left = rl;
    r -> right = rr;
    rl -> left = rll;
    rl -> right = rlr;
    rr -> left = rrl;
    rr -> right = rrr;

    levelOrder(r);

}
