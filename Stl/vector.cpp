#include<iostream>
#include<vector>


using namespace std;



int main(){

    vector <int> v{1,2,3,4,5,6,7,8};

    

    vector <int> v1{2,3,4}; // vector intialization
    vector <int> v2{2,3,4};

     cout<< (v1==v2)<<endl; //compare the vector
     cout<< v.front()<<endl; //give the first value of the vector
     cout<< v.back()<<endl; // give the last value of the vector

     vector <int>:: iterator it; // vector iterator

     for(auto it=v.begin(); it!=v.end();it++){ // give the starting iterator and v.end():- iterator after the last element 
         cout<< *it<<" ";
     }
     cout<<endl;
     vector <int>:: iterator it1;
     for(auto it1=v.rbegin(); it1!=v.rend();it1++){ // give the iterator of last element and v.rend():- iterator before the first element 
         cout<< *it1<<" ";
     }

     cout<< v.empty()<<endl; //check whether the vector is empty or not

     v.erase(v.begin()); // erase the element from begin
     for(auto it1=v.begin(); it1!=v.end();it1++){ // give the iterator of last element and v.rend():- iterator before the first element 
         cout<< *it1<<" ";
     }
     cout<< endl;
     v.pop_back(); //pop the last element of the vector
     v.push_back(9); // push the element at the back

     for(auto it1=v.begin(); it1!=v.end();it1++){ // give the iterator of last element and v.rend():- iterator before the first element 
         cout<< *it1<<" ";
     }
     
     cout<< endl;

     v.insert(v.end(),v1.begin(),v1.end()); //insert the element in vector at certain position

     for(int i=0; i<v.size();i++){
         cout<<v[i]<<" ";
     }


 cout<<endl;

    v.resize(4);
    for(int i=0; i<v.size();i++){
         cout<<v[i]<<" ";
     }
    cout<<endl;

     v.clear();// clear the vector 

     for(auto it=v.begin(); it!=v.end();it++){ // give the starting iterator and v.end():- iterator after the last element 
         cout<< *it<<" ";
     }
     cout<<endl;

    vector<int> v4(10);
    cout<< v4.capacity()<<endl;

    vector <int> v3;
    v3.reserve(20);
    cout<<v3.capacity()<<endl; 

    v4.assign(5,42); //assign the element of the vector

    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
     cout<<endl;
    v4.swap(v2); // swap the vector in constant time
    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
}