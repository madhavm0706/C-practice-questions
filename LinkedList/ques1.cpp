#include<iostream>
using namespace std;

struct Node{
   int data;
   struct Node * next;
};

struct Node * insertnode(int val,struct Node * head){
    struct Node * temp = new Node;
    temp->data = val;
    temp->next = NULL;


    if(head == NULL){
        return temp;
    }else{
        struct Node * var=head;
        while(var->next !=NULL){
            var= var->next;
        }
        var->next = temp;
        return head;
    }

}

void display(struct Node * head){
    struct Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deletenode(struct Node * ptr){

    ptr->data = ptr->next->data;

    struct Node * temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);

}

int main(){

    struct Node * head = NULL;
    head = insertnode(1,head);
    head = insertnode(5,head);
    head = insertnode(6,head);
    head = insertnode(7,head);
    head = insertnode(8,head);

    display(head);
    deletenode(head->next);
    display(head);



    return 0;
}