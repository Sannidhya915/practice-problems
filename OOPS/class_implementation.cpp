// Program to demonstrate implementation of class

#include<iostream>
using namespace std;

class Teacher{

    public:
    //Data members / properties / attributes
    string name;
    string dept;
    string subject;
    double salary;
    //Member Functions / methods

    void changeDept(string newDept){
        dept = newDept;
    }

};

int main(){

    Teacher t1;
    t1.name = "Mr. Teacher";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.salary = 52000.00;

    t1.changeDept("Computer Science & Engineering");

    return 0;
}