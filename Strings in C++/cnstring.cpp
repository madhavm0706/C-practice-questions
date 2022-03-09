#include<iostream>
using namespace std;


int main(){
//  dynamic allocation to string
string * s = new string;
*s = "madhav maheshwari";

cout<<*s<<endl;

string s1;
// cin>>s1; //take input upto first space only
getline(cin,s1);

 cout<<s1<<endl;

string s2="madhav maheshwari";
cout<<s2[0]<<endl;
s2[0] = 'M';
 cout<< s2+s1<<endl;

 cout<<s2.size()<<endl;
 cout<<s2.find("dh")<<endl;
 cout<<s2.substr(3,3)<<endl;

 

    return 0;
}