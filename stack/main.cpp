#include<iostream>
using namespace std;

class Stack{

    int *data;
    int top;
    int capacity;

public:

        Stack(int totalsize){
            data = new int[totalsize];
            top= -1;
            capacity = totalsize;
        }    

        bool isEmpty(){
           if(top == -1){
               return true;
           }else{
               return false;
           }
        }

        bool IsFull(){

            if(top == capacity-1){
                return true;
            }else{
                return false;
            }

        }

        void push(int x){
            if(top+1 == capacity){
               cout<<"Stack is full"<<endl;

            }else{
            data[++top] = x;
            } 
        }

        int pop(){
            if(top == -1){
                cout<<"Stack is empty"<<endl;
                return 0;
            }else{
                return data[top--];
            }
        }

        int currentsize(){
            return top+1;
        }

        int topelement(){
            return data[top];
        }

};


int main(){

    Stack s(5);
    cout<<s.isEmpty()<<endl;
    s.push(2);
    s.push(4);
    s.push(6);
    cout<<s.currentsize()<<endl;
    cout<<s.IsFull()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.topelement()<<endl;




    return 0;
}