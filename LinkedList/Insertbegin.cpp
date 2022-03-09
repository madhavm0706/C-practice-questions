#include<iostream>
using namespace std;

struct Node{
     int data;
     struct Node * next;
};

struct Node * createnode(int val){
    struct Node * newnode = new Node;
    newnode->data = val;
    newnode->next = NULL;

    return newnode;

}

struct Node * insertatbegin(int val,struct Node * head){

    struct Node * newnode = createnode(val);

    if(head == NULL){
        return newnode;
    }else{
        newnode->next = head;
        head = newnode;

        return head;
    }

}

struct Node * insertatn(int val,int pos,struct Node * head){
    struct Node * newnode = createnode(val);

    if(head == NULL){
        return newnode;
    }else{
        struct Node * temp = head;
        for(int i =1;i<pos-1;i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        return head;
    }
}

struct Node * deleteatbegin(struct Node * head){
    struct Node * temp = head;
    head  = head->next;
    free(temp);
    return head;
}

struct Node *deleteatlast(struct Node * head){
    struct Node * temp = head;
    while(temp->next->next !=NULL){
        temp= temp->next;
    }
    free(temp->next);
    temp->next = NULL;

    return head;
}

struct Node * deleteatn(int pos,struct Node * head){
    struct Node * temp = head;
    struct Node * temp1 = temp->next;

    for(int i=1;i<pos-1;i++){
        temp = temp->next;
        temp1  = temp1->next;

    }

    temp->next = temp1->next;
    free(temp1);
    return head;
}

void Display(struct Node * head){
    
    struct Node * trav = head;
    
    while (trav != NULL)
    {
        cout<<trav->data<<" ";
        trav= trav->next;
    }
    
}

int main(){

    struct Node * head = NULL;

    head = insertatbegin(1,head);
    head = insertatbegin(5,head);
    head = insertatbegin(3,head);
    head = insertatbegin(2,head);
    head = insertatbegin(7,head);
    head = insertatn(8,3,head);

    head = deleteatbegin(head);

    head = deleteatlast(head);
    head = deleteatn(3,head);



    Display(head);





    return 0;
}