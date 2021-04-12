// reverse an array using recurson and normal method

#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}

void reversenormal(int arr[],int start,int end){

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
        start++;
        end--;
    }


}

void reverserec(int arr[],int n){
    if(n==0){
        cout<<arr[0];
        return;
    }
    
    cout<<arr[n]<<" ";
    reverserec(arr,n-1);
    
}


int main(){

    int arr[]={1,5,3,7,8,9};
    int n  = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    cout<<endl;

    reversenormal(arr,0,n-1); //array becomes 9 8 7 3 5 1

    print(arr,n);
    cout<<endl;

    reverserec(arr,n-1);//array becomes 1 5 3 7 8 9

    


    return 0;
}