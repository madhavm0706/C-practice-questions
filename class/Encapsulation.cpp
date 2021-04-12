#include<iostream>
using namespace std;


class Encapsulation{

    private: 
        int data =5;

    public:
        void print(){
            cout<<data<<endl;
        }    
};





int main(){

    Encapsulation d;

    d.print();
     
}