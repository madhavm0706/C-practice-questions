#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getminMax(int arr[],int n){
    struct Pair minmax;
    if(arr[0]>arr[1]){
        minmax.min=arr[1];
        minmax.max = arr[0];
    }
    if(arr[0]<arr[1]){
        minmax.min=arr[0];
        minmax.max = arr[1];
    }

    for(int i =2;i<n;i++){
        if(minmax.max >arr[i]){
            minmax.max = arr[i];
        }
        if(minmax.min < arr[i]){
            minmax.min = arr[i];
        }
    }

    return minmax;
}


int main(){

    int arr[]={11,43,200,2000,32,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    struct Pair minmax = getminMax(arr,n);

    cout<<"minimum element is "<<minmax.min<<endl;
    cout<<"maximum element is "<<minmax.max<<endl;
    

    return 0;
}