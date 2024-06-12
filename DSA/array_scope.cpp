// Program to demonstrate the scope of array

//Since we're passing an array and arr represents address of 1st element of array so theres a reference to original array hence we are working on the original array whenever array is passed.

#include<iostream>
using namespace std;

void update(int arr[]){
    arr[0]=100;             
    cout<<"Printing array outside main:"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Back to main"<<endl;
}

int main(){

    int arr[3] = {1,2,3};


    cout<<"Printing array in main:"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    update(arr);

    cout<<"Printing array inside main again:"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}