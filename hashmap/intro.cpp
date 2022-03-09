#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


int main(){

    unordered_map<string, int> ourmap;
    // insert
    pair<string,int> p("abc",1);
    ourmap.insert(p);

    ourmap["def"] = 2;

    // find or access
    cout<< ourmap["abc"]<<endl;
    cout<<ourmap.at("def")<<endl; //if def is not present then it will give an error

    cout<<"size is :" << ourmap.size()<<endl;
    cout<< ourmap["ghi"]<<endl; // create ghi and make its value 0

    // check presence
    if(ourmap.count("ghi") >0){
        cout<<"ghi is present"<<endl;
    }

    // erase
    ourmap.erase("ghi");

    cout<<"size is :" << ourmap.size()<<endl;



    return 0;
}