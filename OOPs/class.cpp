#include<iostream>
using namespace std;

class Student{
    public:
        int rollno;
        int age;
};
int main(){

    // static object
    Student s1;
    Student s2;

    s1.rollno = 19;
    s1.age = 21;

    s2.rollno = 19;
    s2.age = 21;

    cout<<s1.age<<" "<<s2.rollno<<endl;
    // dynamic object
    Student *s4 = new Student;

    s4->age = 22;
    s4->rollno = 40;

    cout<<s4->age<<" "<<s4->rollno<<endl;

    return 0;
}