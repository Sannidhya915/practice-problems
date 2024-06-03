// Program to convert Decimal to Binary

#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    int i = 0;
    float ans = 0;

    // Input n
    cin>>n;

    while(n!=0){

        //Extracting the LSB with bitwise
        int bit = n&1;

        ans = ( bit * pow(10,i) ) + ans;

        // Right shift n by 1 bit
        n = n>>1;

        i++;
    }

    cout<<"Result : "<<ans;

    
    return 0;
}