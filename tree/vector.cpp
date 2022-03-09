#include<iostream>
#include<vector>

using namespace std;

int main(){
     
     vector<int> v;

     for(int i=0;i<100;i++){
         cout<<"cap:"<<v.capacity()<<endl;
         cout<<"size:"<<v.size()<<endl;
         v.push_back(i);
     }
     v.push_back(12);
     v.push_back(20);
     v.push_back(30);

     v[2] = 100; //update the value 
     v[3] = 300;  //[] only use for get and update not for insertion
     v[4]= 400;

     v.push_back(50);
     v.pop_back(); //delete the last element 

     cout<<v[0]<<endl;
      cout<<v[1]<<endl;
       cout<<v[2]<<endl;
        cout<<v[3]<<endl;
         cout<<v[4]<<endl;
         cout<<v[5]<<endl;

    cout<<"size is "<<v.size()<<endl;


    

    cout<< v.at(2)<<endl;
    cout<<v.at(7)<<endl; //safer as it will give an error    

    return 0;
}