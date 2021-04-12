#include<iostream>
using namespace std;

class Abstraction{
    private:
        int a;
        int b;
    public:
        void set(int x,int y){
              
              a=x;
              b=y;

        }
        void display(){
            cout<<"a "<<a<<endl;
            cout<<"b "<<b<<endl;
        }    
};



int main(){

Abstraction a;
a.set(20,60);
a.display();
}