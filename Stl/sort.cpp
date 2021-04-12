#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[]){
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";

    }
}

int main(){

    int a[10]={1,4,24,21,22,34,3,9,2,25};
    cout<<"Array before sorting "<<endl;
    show(a);

    sort(a,a+10);

    cout<<"Array after sorting "<<endl;
    show(a);



    return 0;
}