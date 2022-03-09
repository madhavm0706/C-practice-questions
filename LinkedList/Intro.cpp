#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

struct Node * createnode(int val){
    struct Node *newnode= new Node;
    newnode->data = val;
    newnode->next = NULL;

    return newnode;
    
}

struct Node * insertnode(int val, struct Node * head){
    struct Node * newnode = createnode(val);

    if(head == NULL){
        return newnode;
    } else{

        struct Node * trav = head;
        while(trav->next != NULL){
            trav = trav->next;
        }
        trav->next = newnode;
        return head;
    }


}

void Display(struct Node * head){
    struct Node * trav = head;
    while(trav !=NULL){
        cout<< trav->data<<" ";
        trav = trav->next;
    }
}

int main(){

    struct Node * head = NULL;
    head= insertnode(1,head);
    cout<<head<<endl;
    head= insertnode(3,head);
    cout<<head<<endl;
    head= insertnode(2,head);
    head= insertnode(7,head);
    head= insertnode(6,head);

    cout<<"Linked list is"<<endl;

    Display(head);


    return 0;
}
