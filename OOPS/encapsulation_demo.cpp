// Program to demonstrate implementation of encapsulation

#include<iostream>
using namespace std;

// Implementing encapsulation using a class

class Teacher{

    // Using an access specifier helps us in data hiding
    private:
    double salary; //Sensitive data like salary can be hidden with use of private specifier to prevent external access.
    
    public:
    //Data members / properties / attributes
    string name;
    string dept;
    string subject;
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
    // t1.salary = 52000.00;  // The salary member can't be accessed direcly, demonstarating data hiding throug encapsulation.

    t1.changeDept("Computer Science & Engineering");

    return 0;
}