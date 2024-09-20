/*
https://snakify.org/en/lessons/for_loop_range/problems/lost_card/*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;                                             
    int i = 1;
    int sum = 0;
    int xor1 = 0;
    while(i<=n) {
        xor1 = xor1 ^ i;
        i++;
    }
    i = 1;
    while(i<n) {
        int eachNum;
        cin>>eachNum;
        xor1 = xor1 ^ eachNum;
        i++;
    }

    cout<<xor1<<endl;
    return 0;
}