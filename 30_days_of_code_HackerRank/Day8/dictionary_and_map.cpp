#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, no;
    cin>>n;
    
    string name, query;
    
    map<string,int>  m;
    
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>no;
        m.insert(pair<string, int>(name, no));
    }
    
    
    while(true){
        cin>>query;
        
        if(!cin){
            break;
        }
              
        map<string, int>::iterator it = m.find(query);

        if (it != m.end()) {
            cout<<it->first<<"="<<it->second<<endl;
        } else {
            
            cout << "Not found" << endl;
        }
    }
    
    
    return 0;
}
