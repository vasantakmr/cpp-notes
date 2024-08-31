/*
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE

Example: 
H   X  Y
100 25 40

100 -25 = 75 -25= 50 -25= 25 -25 = 0

100 -40 = 60 /25 
    1       2       1

Ans : 4

Example2:

H   X   Y
100 29 45

pattern1 : 100 - 29 = 71 -29 = 42 -29 = 13 - 29 = -something
patten2 :  100 - 29 = 71 - 29= 42 -45 = -3


Solution explanation:
100 - 45 = 55 / 29 = 1. =2

55 % 29 = 26 - 29 = -3
Ans: 3

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h, x, y, ans = 0;          // h = 100, x = 25 y = 40

    cin>>h>>x>>y;
    int initialPower = (x>y)? x: y;// initialpower = 40

    if(h>0) {                       // h = 100
        h -= initialPower;          // h = h - initial = 100 - 40 = 60
        ans++;                      // ans = ans+1 = 1;
    }

    if(h>0) {                       // h = 60
        ans = ans + (h/x);          // ans = ans + (h/x) = 1+ (60/25) = 1+2 =3
        if(h%x!=0) {                // h%x = 60%25 = 10!=0 = true = 
            ans++;                  // ans = ans+1 = 3+1 = 4
        }
    }

    cout<<ans;
    return 0;
}