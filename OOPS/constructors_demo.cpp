// Program to demonstrate implementaion of constructors.

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

    void getInfo(){
        cout<<"\nName : "<<this->name;
        cout<<"\nDepartment: "<<this->dept;
    }

    // Constructors are written with public specifier
    
    //A non parameterized constructor

    Teacher(){  // Gets called whenever an object is made
        cout<<"This is a non parameterized constructor.";
    }

    //A parameterized constructor
    // Gets called whenever an object is made by passing the exact no of arguments as in constructor.
    Teacher(string n, string d, string sub, double sal){ 
        name = n;
        dept = d;
        subject = sub;
        salary = sal;

        cout<<"\nThis is a parameterized constructor.";
    }

    //Copy constructor
    Teacher(Teacher &t){
        this->name = t.name;
        this->dept = t.dept;
        this->subject = t.subject;
        this->salary = t.salary;

        cout<<"\nThis is a copy constructor.";
    }

};

int main(){

    Teacher t1;
    t1.name = "Mr. Teacher";
    t1.dept = "CSE";
    t1.subject = "C++";
    // t1.salary = 52000.00;  // The salary member can't be accessed direcly, demonstarating data hiding throug encapsulation.

    t1.changeDept("Computer Science & Engineering");

    Teacher t2("Teacher 2", "IT", "Python", 52000.00);

    Teacher t3(t2);  //A copy constructor takes an object and copies it.
    t3.getInfo();
    return 0;
}