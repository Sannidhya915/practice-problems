// Program to reverse an array with while loop without temp variable

#include<iostream>
using namespace std;

void rev_arr(int arr[], int N){
    int start=0;
    int end=N-1;

    while(start<end){

        swap(arr[start],arr[end]);
        start++;
        end--;
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