// Program to implement linear search in an array

#include<iostream>
using namespace std;

bool linear_search(int arr[],int size, int key){
    for(int i =0;i<size;i++){
        if(arr[i] == key)
            return 1;
    }
    
    return false;
}

int main(){

    int arr[100],size,key;

    cout<<"Input size of array:";
    cin>>size;

    cout<<"\nInput array elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"\nInput element to be searched in the array:";
    cin>>key;

    bool key_exists = linear_search(arr,size,key);

    if(key_exists){
        cout<<"\nElement found in the array!";
    }
    else{
        cout<<"\nElement not found in the array!";
    }

    return 0;
}