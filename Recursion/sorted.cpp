#include<iostream>
using namespace std;

bool Issorted(int arr[],int size){
    if(size ==0|| size ==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return Issorted(arr+1,size-1);
}

int main(){
    int arr[9] = {1,4,5,6,9,1,12,15,19};

    bool result = Issorted(arr,9);
    cout<<result<<endl;



    return 0;
}