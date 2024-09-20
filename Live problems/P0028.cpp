/*
https://snakify.org/en/lessons/for_loop_range/problems/factorial/
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;                                     // 4  3  2  1

    int factorial = 1;                          // 1 * 4 * 3 * 2 * 1
    int i = 1;

    while(i<=n) {                                // 
        factorial = factorial * i;
        i++;
    }

    cout<<factorial<<endl;
    return 0;
}