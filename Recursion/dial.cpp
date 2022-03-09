#include<iostream>
using namespace std;

string outstring[10]={"+","*","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int dialstring(int n, string output[]){
    if(n==0){
        output[0]="";
        return 0;
    }
     int smallstring = dialstring(n%10,output);
     for(int i=0;i<smallstring;i++){
         for(int j=0;j<outstring[n].size();j++){
             output[i] = output[i]+ outstring[n][j];
         }
     }
}

int main(){
    int n;
    cin>>n;
    int size;
    while(n > 0){
        n = n/10;
        size++;

    }
    string output[100];
    int result = dialstring(n,output);

    for(int i=0;i<result;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}