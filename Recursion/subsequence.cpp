#include<iostream>
using namespace std;

int subsequence(string s, string output[]){
     int size = s.size();
     if(s.empty()){
         output[0]= " ";
         return 1;
     }

     int smallstring = subsequence(s.substr(1),output);

     for(int i=0;i<smallstring;i++){
         output[i+smallstring] = s[0]+output[i];
     }

     return 2*smallstring;


}

int main(){

    string s;
    cin>>s;
     string output[100]; //allocate dynamically is best practice
    int result = subsequence(s,output);

    for(int i=0;i<result;i++){
        cout<<output[i]<<endl;
    }
    

    return 0;
}