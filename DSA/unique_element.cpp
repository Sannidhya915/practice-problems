// Program to find unique element in array, given it's an odd set and all other element appears twice.

/*
This can be done by using the XOR operation as:

a XOR a = 0
a XOR 0 = a

*/

#include<iostream>
using namespace std;
int main(){
    
    int arr[9] = {1,2,5,4,3,2,1,4,5};

    int unique=0;

    for(int i=0;i<9;i++){
        unique = unique ^ arr[i] ;
    }

    cout<<"The Unique element is:"<<unique;
    
    return 0;
}