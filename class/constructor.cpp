#include<iostream>
using namespace std;

class Data{
    public:
        int data=2;
        string name;

    Data(){
        cout<<"madhav"<<endl;

    }

    Data(int x){
        cout<<data+x<<endl;
    } 

    Data (Data &data){
        cout<<data.data<<endl;
    }   
};


int main(){

   
    Data d;
      
    Data d1(2);

    Data d3 = d;

   

    return 0;


}