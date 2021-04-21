#include<bits/stdc++.h>
using namespace std;

void display(map<char,int> u){
    cout<<"The element present in a map are"<<endl;
    for(auto x:u){
        cout<<"<"<<x.first<<","<< x.second<<">"<<" ";

    }

    cout<<"the size of this map is "<<u.size()<<endl;
}
void display(multimap<char,int> u){
    cout<<"The element present in a map are"<<endl;
    for(auto x:u){
        cout<<"<"<<x.first<<","<< x.second<<">"<<" ";

    }

    cout<<"the size of this map is "<<u.size()<<endl;
}



class comp{
    public:
    bool operator() (char a,char b){
        return a>b;
    }



};

void display(map<char,int, comp> u){
    cout<<"The element present in a map are"<<endl;
    for(auto x:u){
        cout<<"<"<<x.first<<","<< x.second<<">"<<" ";

    }

    cout<<"the size of this map is "<<u.size()<<endl;
}

int main(){
  
   map<char,int> u;// ordered map 
   u['a'] = 3;
   u['a']=4;//Updation
   u['b']=5;
   
   u.insert({'c',12});
   u.insert(make_pair('e',13));
   u['d']=1;

   display(u);
   u.insert({'a',33}); //Ignored! not for updation

   u.erase('a');
 u.insert({'a',33});
 display(u);


 auto it = u.begin();
 ++it;
 ++it;

 u.insert(it,{'f',7}); //no use of passing iterator as it is an ordered map
 display(u);

 cout<<u['y']<<endl; // y is not in a map but it will print 0

 if(u.find('b') == u.end()){
     cout<<"key not found"<<endl;
 }else{
     cout<<"key found and value is"<<u['b']<<endl;
 }


map <char,int, comp> m; // decending order of keys
m.insert(u.begin(),u.end());
display(m);

// multimaps

multimap<char,int> v;
v.insert({'a',1});
v.insert({'a',3});
v.insert({'a',33});
v.insert({'b',12});
v.insert({'b',21});
v.insert({'c',12});

// we can't insert it like v['a'] or we can not print the value like v['a]

v.erase('a'); //erase all the value of key a

auto res = v.equal_range('a');
for(auto it = res.first; it!= res.second;it++){
    cout<< it->second<<endl;
}
display(v);


    return 0;

}