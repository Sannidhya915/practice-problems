//Program to calculate the sum of elements of an array

#include<iostream>
using namespace std;

int main(){

    int arr[100],size;
    int sum=0;
    cout<<"Input size of array: ";
    cin>>size;

    cout<<"\nInput array elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    cout<<"\nSum of elements of array:"<<sum;
    return 0;
}