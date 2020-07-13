// string Part 2

#include<iostream>
#include<string>
using  namespace std;


int main(){

    string s("Madhav Maheshwari");

    cout<<"string: "<<s<<endl;

    // compare strings 
    string str1("Madhav Maheshwari");
    string str2("Madhav Maheshwari");

    if(str1.compare(str2) == 0){
        cout<<"Strings are equal"<<endl;
    }else{
        cout<<"strings are not equal"<<endl;
    }

    string str3("hello world , hello world");

    cout<<"First occurance of world is :  ";
    cout<<str3.find("world")<<endl;

    cout<<"First occurance of character 'wait' is : ";
    cout<<str3.find_first_of("wait")<<endl;

    cout<<"Last occurance of character 'wait' is : ";
    cout<<str3.find_last_of("wait")<<endl;

    cout<<"Find last occurance of 'world' is ";
    cout<<str3.rfind("world")<<endl;


    // insert string

    str3.insert(6,"hello");
    cout<<str3<<endl;

    str3.clear();

    cout<<str3<<endl;

    if(str3.empty() ==1){
        cout<<"string is empty "<<endl;
    }else{
        cout<<"string is not empty "<<endl;
    }
    




    return 0;
}