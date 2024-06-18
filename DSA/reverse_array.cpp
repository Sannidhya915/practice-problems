// Program to reverse an array with for loop and temp variable

#include<iostream>
using namespace std;

void rev_arr(int arr[], int N){
    int temp;
    for(int i=0,j=N-1; i<j; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
    }

}

int main(){
    
    int arr[100],size;

    
    cout<<"\nInput array size:";
    cin>>size;

    cout<<"\nInput array elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"\nOriginal Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    // Reverse the array
    rev_arr(arr,size);

    // Printing reversed array
     cout<<"\nReversed Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}