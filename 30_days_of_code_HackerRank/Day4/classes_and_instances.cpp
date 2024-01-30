#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person{
 
    public:
    int age;
    
    Person(int initialAge){
        if(initialAge<0){
            cout<<"Age is not valid, setting age to 0."<<endl;
            age = 0;
        }
        else{
            age = initialAge;
        }
    }
    
    void yearPasses(){
       age++;
    }
    
    void amIOld(){
        if(age<13){
            cout<<"You are young."<<endl;
        }
        else if(age<18){
            cout<<"You are a teenager."<<endl;
        }
        else{
            cout<<"You are old."<<endl;
        }
    }
    
        
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int T, Age;
    cin>>T;
    
        
    for(int i=0; i<T; i++){
        cin>>Age;
        Person P(Age);
        P.amIOld();
        for (int j = 0; j < 3; j++) {
            P.yearPasses();
        }
        P.amIOld();
        cout<<endl;
    }
     
    return 0;
}
