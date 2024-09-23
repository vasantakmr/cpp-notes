/*
Fibonocci series
*/


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n; 
    if(n == 0) {
        cout<<0<<endl;
        return 0;
    }
    if(n == 1) {
        cout<<1<<endl;
        return 0;
    }
    int first = 1, second = 0;
    int phiN;
    do{
        phiN = first + second;
        second = first;
        first = phiN;
        n--;
    } while(n>1);
    cout<<phiN<<endl;
    return 0;
} 