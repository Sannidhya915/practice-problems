#include<bits/stdc++.h>

using namespace std;

int main(){

    int x;

    cin>>x;

    if((x&1) == 0){
        cout<<x<<" is Even."<<endl;
    }else{
        cout<<x<<" is Odd."<<endl;
    }

    return 0;
}