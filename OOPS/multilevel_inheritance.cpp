// Program to demonstrate implementaion of multilevel inheritance.

#include<iostream>
using namespace std;

class Person{

    public:
    string name;
    int age;

    // Parent Constructor
    Person(string name, int age){
        this->name = name;
        this->age = age;

        cout<<"This is parent constructor"<<endl;
    }

    ~Person(){
        cout<<"This is parent destructor"<<endl;
    }

};

class Student : public Person{

    public:
    string roll_no;

    // Child Constructor
    Student(string name, int age, string roll) : Person(name, age){
        this->roll_no = roll;

        cout<<"This is child constructor"<<endl;
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll no : "<<roll_no<<endl;
    }


    ~Student(){
        cout<<"This is child destructor"<<endl;
    }

};

// A 3rd class shall inherit properties of a parent from its child class demonstrating multilevel inheritance
class Specialization : public Student{

    public:

    string expertise;

    Specialization(string name, int age, string roll, string exp): Student(name, age, roll){
        cout<<"This is Specialization class's constructor which inherits Student which inturn inherits Person.";
    }

};


int main(){

    Student s1("Ravi", 21, "100");
    s1.getInfo();

    Specialization s2("Riya", 20, "300", "CSE");
    s2.getInfo();

    return 0;
}