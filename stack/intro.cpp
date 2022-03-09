#include<iostream>
using namespace std;

class StackUsingArray{
    int * data;
    int top;
    int capacity;

    public:
        StackUsingArray(int totalsize){
            data = new int[totalsize];
            top = 0;
            capacity = totalsize;
        }

        int size(){
            return top;
        }

        bool isEmpty(){
            return top == 0;
        }

        void push(int x){
            if(top == capacity ){
                cout<<"Stack is full"<<endl;
                }else{
                    data[top++] = x;
                }
        }

        int pop(){
            if(top == 0){
                cout<<"Stack is empty"<<endl;
                return 0;
                
            }else{
                int y;
                 y= data[--top];
                return y;
            }

            }

        int top1(){
            return data[--top];
        }
};

int main(){

    StackUsingArray s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
   

    
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.top1()<<endl;
        cout<<s.isEmpty()<<endl;



    return 0;
}