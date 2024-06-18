// Program to demonstrate implementaion of shallow and deep copy.

#include<iostream>
using namespace std;


class Student{

    public:
    string name;
    float* cgpaPtr;

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }

    Student(string name, float cgpa){ // This constructor helps us implement shallow copy of the object
        this->name = name;
        this->cgpaPtr = new float;
        *cgpaPtr = cgpa;
    }

    Student(Student &s){  // This copy constructor helps us implement deep copy of the object
        this->name = s.name;
        this->cgpaPtr = new float;
        *cgpaPtr = *s.cgpaPtr;
    }

};

int main(){

    Student s1("Rahul", 8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 7.1;
    s1.getInfo();

    s2.name = "Neha";
    s2.getInfo();

    return 0;
}