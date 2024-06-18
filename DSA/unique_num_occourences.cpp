/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000

*/


#include<iostream>
#include<vector>

using namespace std;

bool uniqueOccurrences(int arr[]) {
    
    int x, count=0;

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        x =arr[i];
        for(int j=1;j<(sizeof(arr)/sizeof(arr[0]));j++){
            if(x == arr[j])
                count++;
        }
        if(count>1){
            return false;
        }
    }
    return true;

}


int main(){

    int arr[] = {1,2};

    bool check = uniqueOccurrences(arr);

    if(check){
        cout<<"Elements have unique number of occurrences!";
    }else{
        cout<<"Elements does not have unique number of occurrences!";
    }

    return 0;
}