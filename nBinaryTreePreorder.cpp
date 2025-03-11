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


void DLR(Node *root){ // postorder DLR
    if(root == NULL) return;


    cout << root -> data << " ";
    DLR (root -> left);
    DLR (root -> right);

    
    

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

    DLR(r);


}