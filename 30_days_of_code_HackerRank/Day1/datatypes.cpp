#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int my_int,i=4;
    double my_double,d=4.0;
    string my_str, s="HackerRank";
    
    cin>>my_int;
    cin>>my_double;
    getline(cin , my_str);
    
    cout<<my_int+i<<endl;
    cout<<fixed<<setprecision(1)<<my_double+d<<endl;
    // cout<<s<<" ";
    cout<<my_str;
    
    return 0;
}
