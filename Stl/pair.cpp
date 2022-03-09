#include<bits/stdc++.h>
using namespace std;


    bool comp (pair<int,string> a,pair<int,string> b){
        return a.first> b.first;
    }


template <class pair>
void displayvector(const vector<pair> &v){
    for(auto x:v){
        cout<<"("<<x.first<<","<< x.second<<")"<<" ";
    }

    cout<<endl;

}
int main(){
     pair <int, int> p;//initialize pair
     p = make_pair(12,13); //assign value
     cout<< p.first <<" "<<p.second<<endl;


    // pairs in vectors

    vector <pair<int,int>> v;
    v.push_back({3,12});
    v.push_back({1,2});
    v.push_back({2,1});

    displayvector(v);

    vector <pair<int,string>> v1;
    v1.push_back({2,"my"});
    v1.push_back({4,"is"});
    v1.push_back({3,"name"});
    v1.push_back({6,"Maheshwari"});
    v1.push_back({5,"Madhav"});
    v1.push_back({1,"Hello"});

    sort(v1.begin(),v1.end()); //sort in assending order

    displayvector(v1);

    sort(v1.begin(),v1.end(),comp);
    displayvector(v1); 


    return 0;
}