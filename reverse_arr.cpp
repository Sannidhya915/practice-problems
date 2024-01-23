// Program to reverse and array
#include<iostream>
using namespace std;

int main(){

     int n=10000;
    int arr[n];

    // Input size of array
    cout<<"I/P size of array :";
    cin>>n;

    // Input array element max n allowed;
    cout<<"I/P array elements : "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Print array
    cout<<"Array :      ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

    // Reversing array here

    for (int i = 0, j=n-1 ; i < n/2; i++,j--)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    // Print reversed array
    cout<<"\nReversed Array :      ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

    


    return 0;
}