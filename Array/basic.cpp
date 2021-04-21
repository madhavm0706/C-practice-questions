#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,43,3,34};
    int *left = arr;

    cout<<arr[0]<<" ";
    cout<<*left<<" ";
    cout<<arr<<" ";
    cout<<left<<" ";

    return 0;
}