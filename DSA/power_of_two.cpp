/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1

*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n, x;

    // Input number
    cin>>n;

    for(int i = 0; i<31; i++){
        // Calculating x-> power of 2
        x = pow(2,i);
        
        if(n == x){
            cout<<n<<" is pow of 2.";
            return 0;
        }
    }

    cout<<n<<" is not a pow of 2.";
    return 0;
}