/*
    Find if the given year is a leap year.

    Input 2004

    output "Leap Year";

    Input 2003

    output "Not a Leap Year";

    A year is a leap year if:
    1. it is divisible by 4 and
    2. It is not divible by 100 but it can be divisible by 400;

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    cin>> n>>m;

    if(n%2==0 || m %2 == 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    cout<<((n%2 ==0) || (m%2 ==0)?"YES": "NO");

    cout<<(((n*m)%2 ==0)?"YES": "NO");
    return 0;
}
