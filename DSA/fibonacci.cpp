// Program to print Fibonacci series upto Nth term

#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0;
    int b=1;
    int c;

    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n-2; i++){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }

}


int main(){

    int n;
    cin>>n;
    cout<<"Fibonacci Series upto "<<n<<" terms:";
    fibonacci(n);
    return 0;
}

