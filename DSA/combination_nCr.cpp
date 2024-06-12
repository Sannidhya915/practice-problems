// Program to calculate nCr


#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;

    for(int i =1; i<=num; i++){
        fact = fact*i;
    }

    return fact;
}

int nCr(int n, int r){

    int comb;

    comb = fact(n)/(fact(r)*fact(n-r));

    return comb;
}


int main(){

    int n,r;
    cout<<"Program to calculate nCr"<<endl;
    cout<<"Input n = ";
    cin>>n;
    // cout<<endl;
    cout<<"Input r = ";
    cin>>r;
    // cout<<endl;

    cout<<"nCr = "<<nCr(n,r);

    return 0;
}