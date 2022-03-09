#include<iostream>
using namespace std;

int allindex(int arr[],int size,int x,int output[]){
    if (size == 0){
        return 0;
    }
    int ans = allindex(arr+1,size-1,x,output);

    if(arr[0] == x){
         for(int i= ans-1; i>=0;i--){
         output[i+1]= output[i]+1;
     }
        
        output[0] = 0;
        ans++;
    }else{
            for(int i= ans-1; i>=0;i--){
         output[i]= output[i]+1;
     }

    }

    
     return ans;
}

int main(){

    int arr[] = { 1, 2, 3, 2, 2, 5 }, x = 5;
    int n = 6;
    int output[n];
    int ans = allindex(arr,6,x,output);
     cout<<"[";
    for(int i=0;i<ans;i++){
        cout<<output[i]<<",";
    }
    cout<<"]"<<endl;

    return 0;
}