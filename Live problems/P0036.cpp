/*
LCM 
HCF: 
 10
 20 10
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int hcf = 1;
    int minOfAB = (a>b) ? b:a;
    for(int i = 2; i<=minOfAB; i++) {
        if(a%i == 0  && b%i == 0) {
            hcf = i;
        }
    }

    cout<<hcf<<endl;

    int lcm = 0;
    lcm = (a/hcf) * b;

    cout<<lcm<<endl;

    return 0;
}
