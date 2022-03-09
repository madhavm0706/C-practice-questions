#include<iostream>
using namespace std;

class Student{
    public:
        int rollno;
        int age;

        Student(){
            cout<<"Default Constructor called"<<endl;
        }
        Student(int rollno){
            this->rollno =rollno; //this is a pointer hold the add of current object
            cout<<"st rollno value"<<endl;
        }

        void dispaly(){
            cout<<age<<" "<<rollno<<endl;       
        }

        ~Student(){
            cout<<"Destructor"<<endl;
        }
        
};


int main(){

    Student s1;
    s1.age = 21;
    s1.rollno = 30;
    s1.dispaly();
    Student s2(10);
    s2.age =32;

    s2.dispaly();

    Student s3(s2); //copy constructor

    s3.dispaly();

    Student * s4 = new Student;
    s4->age = 66;
    s4->rollno = 12;

    Student s5(*s4); //copy constructor from dynamic 
    s5.dispaly();

    *s4 = s3;  // copy assignment operator

    s4->dispaly(); 

    Student s6 = s5; //copy constructor

    delete s4; // we have to delete from heap

    

    return 0;
}