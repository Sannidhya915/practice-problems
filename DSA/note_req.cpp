/*
Given we have an amount x R.
We need to determine what would be the minumum number of notes of:
> Rs.100
> Rs.50
> Rs.20
> Rs.1
are required to sum up the amount while using only switch case.
*/

#include<iostream>
using namespace std;

int main(){

    int amount,x,rem;

    cin>>amount;    //Input amount

    switch(amount/100){
        default:
            cout<<"It requires "<<(amount/100)<<" notes of Rs. 100"<<endl;         
            rem = amount%100;
    }

    switch(rem/50){
        default:
            cout<<"It requires "<<(rem/50)<<" notes of Rs. 50"<<endl;         
            rem = rem%50;
    }

    switch(rem/20){
        default:
            cout<<"It requires "<<(rem/20)<<" notes of Rs. 20"<<endl;         
            rem = rem%20;
    }

    switch(rem/1){
        default:
            cout<<"It requires "<<(rem/1)<<" notes of Rs. 1"<<endl;         
            rem = rem%1;
    }

    return 0;
}