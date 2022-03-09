#include<iostream>
using namespace std;
int s=8;
int firstIndex(int arr[],int size, int x){
    if(arr[0] == x){
        return s-size;
    }
    if(size==1 && arr[0]!=x){
        return -1;
    }
    return firstIndex(arr+1,size-1,x);
}

int main(){

    int arr[]={5,6,6,5,7,8,8,7};
    int result;
    result = firstIndex(arr,8,8);

    cout<<result;
     
    return 0;
}