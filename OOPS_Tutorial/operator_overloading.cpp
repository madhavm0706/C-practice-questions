#include<iostream>
using namespace std;

class A{

    int weight;

public:

    A(int x=0){
        weight = x;
    }

    void getdata(){
        cout<<weight<<endl;
    }

    A operator+(A w){
        A temp;
        temp.weight  = weight+w.weight;
        return temp;
    }
    


};


int main(){

    A person1(68);
    A person2(77);

    A total;
    total = person1 + person2;

    total.getdata(); 



    return 0;
}