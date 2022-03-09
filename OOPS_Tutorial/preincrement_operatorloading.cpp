#include<iostream>
using namespace std;

class A{
    int weight;

public:
    A(int x=0){
        weight =x;
    }  



    void getweight(){
        cout<<weight<<endl;
    } 

    void operator++(){

         ++weight;
        
    } 
    void operator++(int){ //used to differentiate post increment

         weight++;
        
    }
};

int main(){

    A madhav(67);
    ++madhav;

    madhav++;

    madhav.getweight();



    return 0;
}