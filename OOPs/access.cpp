#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
    public:
        int age;
        // getter
        void getrollno(){
            cout<<"rollno is:"<<rollno<<endl;
        }
        // setter
        void setrollno(int a){
            rollno =a;
        }

};

int main(){

    // static allocation 

    Student s1;
    s1.age = 21;

    s1.setrollno(30);
    cout<<s1.age<<" ";
    s1.getrollno();

    // dynamic allocation

    Student  *s2 = new Student;
    s2->age = 22;
    s2->setrollno(21);
    cout<<s2->age<<" ";
    s2->getrollno();

    return 0;
}