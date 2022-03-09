#include<iostream>
using namespace std;

void merge(int arr[],int start,int mid,int end){
     int n1 = mid - end + 1;
    int n2 = end - mid;
    
    int L[n1];
    int R[n2];

    for(int i=0;i<n1;i++){
         L[i]  = arr[i];
    }

    for(int i=0;i<n2;i++){
         R[i]  = arr[mid+1+i];
    }

    


}

void mergeSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,mid,end);

}

int main(){

    return 0;
}