#include<iostream>
using namespace std;


class Queue{

    int front,rear,capacity;
    int * data;

public:

        Queue(int s){
            front = rear = -1;
            data = new int[s];
            capacity = s;
        }    

        void enqueue(int value);
        int dequeue();
        void displayqueue();



};

void Queue::enqueue(int value){
    if((front == 0 && rear == capacity-1) || rear == (front-1)%(capacity-1)){
        cout<<"Queue is full"<<endl;
        return;
    }else if(front == -1){
        rear = front = 0;
        data[rear] = value;
    }else if(rear == capacity-1 && front !=0){
        rear = 0;
        data[rear] = value;


    }else{
        data[++rear] = value;

    }
}

int Queue::dequeue(){
    if(front == -1){
        cout<<"Queue is Empty"<<endl;
        return INT8_MIN;
    }
      int element  = data[front];

    if(front == rear){
        front = rear = -1;

    }else if(front = capacity-1){
        front =0;
    }else{
         ++front;
    }

    return element;


}
int main(){




    return 0;
}