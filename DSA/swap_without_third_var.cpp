// Swapping two numbers without using 3rd var
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y;

    cin>>x;
    cin>>y;

    x = x+y;
    y = x-y;
    x = x-y;

    cout<<x<<" "<<y;

    return 0;
}
