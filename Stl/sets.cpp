#include<bits/stdc++.h>
using namespace std;

class comp{
public:
        bool operator() (const pair<int,int> &a,const pair<int,int> &b){
            return a.second<b.second;
        }
};

int main(){

    set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(1);

    s.insert(4);// give no error but the content will be the same 

    for(auto x:s){
        cout<< x<<" ";
    }
    cout<<endl;

    auto it = s.find(4);
    s.erase(s.begin(),it);
    for(auto x:s){
        cout<< x<<" ";
    }
    cout<<endl;
    set<pair<int,int>, comp> s2;
    s2.insert({1,2});
    s2.insert({0,6});
    s2.insert({1,5});
    s2.insert({0,3});
    s2.insert({4,1});

    for(auto x:s2){
        cout<<"<"<<x.first<<" "<< x.second<<">";
    }
    cout<<endl;

    // multiset
    multiset<int> m;
    m.insert(5);
    m.insert(5);
    m.insert(4);

    for(auto x:m){
        cout<< x<<" ";
    }

    cout<<endl;

    m.erase(5);
    for(auto x:m){
        cout<< x<<" ";
    }

    cout<<endl;

    
    
    return 0;
}