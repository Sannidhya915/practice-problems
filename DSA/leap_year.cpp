/*
Given a year(an integer variable) as input, find if it is a leap year or not.
Note: Leap year is the year that is multiple of 4. But, multiples of 100 which are not multiples of 400 are not leap years.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin>>N;

    if(N%100==0){
        if(N%400==0)
            cout<<"YES";
        else
            cout<<"NO";
    } 
    else if(N%4==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}