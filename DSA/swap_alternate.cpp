// Program to swap the alternate elements of the array

#include<iostream>
using namespace std;

void swap_arr(int arr[], int N){
    
    for(int i=0;i<N-1;i+=2){
        swap(arr[i],arr[i+1]);
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

    // Swapping alternate elements of the array
    swap_arr(arr,size);

    // Printing swapped array
     cout<<"\nSwapped Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}