#include<iostream>
using namespace std;


class Hello{
    public:
        int data;
        string name;

        void printname();
        void printdata(){
            cout<<data<<endl;
        }
};

void Hello::printname(){
    cout<<"hello "<<name<<endl;
}

int main(){
    
    int N;
    string name;
    cout<<"Enter a number"<<endl;
    cin>>N;

    cout<<"Enter ur name"<<endl;
    cin>>name;

    Hello h;

    h.data = N;
    h.name = name;
    h.printdata();
    h.printname();


}