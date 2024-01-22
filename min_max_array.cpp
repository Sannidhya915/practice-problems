// Program to find min and max element of an array.

#include<iostream>

using namespace std;

 int getMinMax(int a[], int n) {
    
    int mina = 2147483647; //max size of int 
    int maxa = 0;
    
    // maximum elemnt of array
    for(int i=0;i<n;i++){
        if(a[i]>maxa)
            maxa = a[i];
    }
    
    // minimum elemnt of array
    for(int i=0;i<n;i++){
        if(a[i]<mina)
            mina = a[i];
    }
    
    cout<<"Max:"<<maxa<<endl;
    cout<<"Min:"<<mina<<endl;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    // finding min and max elements of array a
    getMinMax(a,10);

    int b[10];

    for (int i = 0; i <= 9; i++)
    {
        cin>>b[i];
    }
    getMinMax(b,10);

    return 0;
}