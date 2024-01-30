#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    
    
    cin>>T;
    
    for(int i=0;i<T;i++){
        string S;
        cin>>S;
        
        for(int j=0;j<=S.length();j=j+2){
            cout<<S[j];
        }
        
        cout<<" ";
        
        for(int j=1;j<=S.length();j=j+2){
            cout<<S[j];
        }    
        
        cout<<endl;
    }
     
    return 0;
}
