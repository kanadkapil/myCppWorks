#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void display(node* head){
    node *temp =head;
    while(temp!=NULL){
        cout << temp->data<< " ";
        temp=temp->next;
    }
    cout << "NULL"<< endl;
}

int main(){
    node* head=NULL;
        insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    insertHead(head, 7);
    display(head);
}