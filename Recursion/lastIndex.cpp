#include<iostream>
using namespace std;

int lastindex(int arr[],int size,int x){
    if(size==0){
        return 0;
    }
    int ans= lastindex(arr+1,size-1,x);

    if(arr[0] == x){
        return ans+1;

    }else{
        return ans;
    }
   
    
     return ans;
}


int main(){

    int arr[]={5,5,6,6,5};
    int result= lastindex(arr,5,6);

    cout<<result<<endl;

    return 0;
}