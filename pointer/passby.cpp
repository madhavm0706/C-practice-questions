
#include<iostream>
using namespace std;

void passbyvalue(int &a,int &b){
    int x;
    x=a;
    a=b;
    b=x;

}

int main(){

    int a=4;
    int b=5;

    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;


    return 0;
}