// Program to demonstrate implementaion of multiple inheritance.

#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    int age;

};

class Teacher{

    public:
    double salary;

};

class TA : public Student, public Teacher{

    public:

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Salary : "<<salary<<endl;
    }

    TA(string name, int age, double salary){

        this->name = name;
        this->age = age;
        this->salary = salary;

        cout<<"This prog demonstrate multiple inheritance as the TA class inherits properties of both Student and Teacher class"<<endl;
    }

};


int main(){

    TA ta1("Rajendra", 26, 30000);
    ta1.getInfo();
    return 0;
}