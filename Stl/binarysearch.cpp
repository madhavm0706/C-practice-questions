#include<iostream>
#include<algorithm>

using namespace std;
void show( int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i] <<" ";
    }
}

int main(){
 int a[]={1,3,5,34,33,12,11,23,15};
 int size = sizeof(a)/sizeof(a[0]);

 sort(a,a+size);
 show(a,size);
cout<<endl;
 cout<<binary_search(a,a+size,4)<<endl;


}