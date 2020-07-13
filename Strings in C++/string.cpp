// strings inbuilt functions in c++

#include<iostream>
using namespace std;



int main(){
    string str;
    getline(cin,str); //Taking string input using getline()

    cout<<"Initial string is "<<str<<endl;

    str.push_back('s'); //This function is used to input a character at the end of the string.
    cout<<" string after using push_back function "<<str<<endl;


    str.pop_back(); //this function is used to delete the last character from the string.
    cout<<" string after using pop_back function "<<str<<endl;


    string name="Aligarh Muslim University";

    cout<<"capacity of string name is "<<name.capacity()<<endl;

    name.resize(13);

    cout<<"resize the string name "<<name<<endl;

    cout<<"the length of the string name is "<<name.length()<<endl;

    name.shrink_to_fit();

    cout<<"The new capacity after shrinking is : "<<name.capacity()<<endl;


    // copy() and swap() functions in strings

    char ch[80];
    string str1 = "Aligarh Muslim University";
    string str2 = "Aligarh";

    str1.copy(ch,13,0); //This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.

    cout<<"the ch is "<<ch<<endl; 

    str1.swap(str2);

    cout<<"str1 after swapping is "<<str1<<endl;



}