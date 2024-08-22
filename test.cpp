/*
    Find the max number of equal variables.

    Input 12 12 23

    output 2;

    // 34 23 34     2
    // 23 12 12     2
    // 12 13 14     1 
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    int ans = 1;

    if(a == b || a == c || b == c) {
        ans++;
    }

    if(a == b && b == c) {
        ans++;
    }

    cout<<ans<<endl;


    return 0;
}
