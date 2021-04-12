#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
};

void print(Node *n){
    while(n != NULL){
        cout<<n->data<<"->";
        n=n->next;
    }
}

bool isEmpty(Node * n ){
    if(n==NULL){
        cout<<"list is empty";
        return true;
    }
    else{
        return false;
    }

}

void append(Node ** headref,int data){
    Node * newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;

    *headref = newnode;



}

void insertatfirst(Node ** headref,int data){
    Node * newnode = new Node();
    newnode->data = data;

    newnode->next = *headref;
    *headref = newnode;

}

void push(Node * prevnode, int data){
    if(prevnode == NULL){
        cout<<"prev node can not be empty"<<endl;

    }else{
    Node * newnode = new Node();
    newnode->data = data;

    newnode->next = prevnode->next;
    prevnode->next = newnode;
    }
}



int main(){

    Node * head = NULL;

    append(&head, 4);
    
    insertatfirst(&head,12);
    push(head,8);
    print(head);
    

    return 0;
}