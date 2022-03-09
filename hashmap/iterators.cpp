#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;


int main(){
    
    unordered_map<string,int> map;
    map["value1"] = 1;
    map["value2"] = 2;
    map["value3"] = 3;
    map["value4"] = 4;
    map["value5"] = 5;

    unordered_map<string,int>::iterator it = map.begin();
    while (it != map.end())
    {
        cout<<"key :"<<it->first<<" value :"<<it->second<<" ";
        it++;
    }

    vector<int> output;
    output.push_back(1);
    output.push_back(3);
    output.push_back(2);
    output.push_back(4);

    vector<int>::iterator it1 = output.begin() ;

    while(it1 != output.end()){
        cout<<*it1<<endl;
        it1++;
    }
    


    
    return 0;

}