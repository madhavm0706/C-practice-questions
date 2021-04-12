#include<iostream>
using namespace std;




int main(){

int *ptr;
int a=10;

ptr = &a;

cout<<ptr<<endl;
cout<<*ptr<<endl;
cout<<a<<endl;
cout<<&a<<endl;

*ptr=11;

cout<<ptr<<endl;
cout<<*ptr<<endl;
cout<<a<<endl;
cout<<&a<<endl;



return 0;

}