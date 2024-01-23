// Program to search an element in an array.
// Linear search


#include<iostream>
using namespace std;

int main(){
    int x, n=10000;
    int arr[n];

    // Input size of array
    cout<<"I/P size of array :";
    cin>>n;

    // Input array element max n allowed;
    cout<<"I/P array elements : "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Input element to search in array
    cout<<"I/P element to search:";
    cin>>x;


    // Searching the element x in the array linearly
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            cout<<"Element found at index :"<<i;
        }
    }

    return 0;
}

