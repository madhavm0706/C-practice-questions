#include<iostream>
using namespace std;




int main(){

int a  = 10;
int *ptr = &a;
string name1 ="maheshwari";
const char *ptr1 = "madhav";
const char * const name = "mahehswari";
ptr1 = "name";
cout<<ptr1[0]<<endl;

char data3 = 'a';
cout<<data3<<endl;

char data[] = "madhavmaheshwari";
char data2[] = {'m','a','d'};
data2[1]='s';
data[3] = 'w';
cout<<data2<<endl;




cout<<*(data+1)<<endl;
cout<<ptr1<<endl;
cout<<name<<endl;



return 0;

}