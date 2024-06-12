// To find the element wth max and min values from the array.

#include<iostream>
using namespace std;

int maximum(int arr[], int N){

    int maxi = INT32_MIN;
    for(int i=0; i<N;i++){
        if(arr[i]>maxi)
            maxi=arr[i];
    }

    return maxi;
}


int minimum(int arr[], int N){

    int mini = INT32_MAX;
    for(int i=0; i<N;i++){
        if(arr[i]<mini)
            mini=arr[i];
    }

    return mini;
}

int main(){
    int arr[100];
    int size;

    cout<<"Input size(maximum 100):";
    cin>>size;

    cout<<"Input elements of the array:"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Max of arr: "<<maximum(arr,size)<<endl;
    cout<<"Min of arr: "<<minimum(arr,size)<<endl;

    return 0;
}