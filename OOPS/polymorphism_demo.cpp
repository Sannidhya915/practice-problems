// Program to demonstrate implementation of class

#include<iostream>
using namespace std;

class Student{

    public:

    string name;
    int age;
    

    // Constructor 1
    Student(){
        cout<<"This is a non-parameterized constrctor and would be called when a object is created without arguments"<<endl;
    }

    // Constructor 2
    Student(string name, int age){
        cout<<"This is a parameterized constrctor and would be called when a object is created without arguments"<<endl;

        this->name = name;
        this->age = age;
    }

};

int main(){

    Student s1("Ravi", 21); // Calls constructor 2 implicitly
    Student s2; // Calls constructor 1 implicitly
    
    return 0;
}