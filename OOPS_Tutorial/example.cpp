#include<iostream>
using namespace std;

class house{


    int length, breadth;
public:

    void setdata(int x, int y){
        length = x;
        breadth = y;
    }

    void printarea(){
        cout<<length*breadth<<endl;
    }


};

class Phone{

    string name;
    int ram;
    string processor;
    int battery;

public:
    Phone( string name_a, int ram_a,string processor_a,int battery_a){
        name = name_a;
        ram = ram_a;
        processor = processor_a;
        battery = battery_a;

    }

    void getdetail();

};

void Phone::getdetail(){
            cout<<name<<endl;
         cout<<ram<<endl;
          cout<<processor<<endl;
           cout<<battery<<endl;


}

int main(){

    house madhav;
    madhav.setdata(12,14);
    madhav.printarea();

    Phone myphone("Redmi",8,"Dragon",5000);
    myphone.getdetail();

    return 0;
}