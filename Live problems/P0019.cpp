/*
https://snakify.org/en/lessons/while_loop/problems/seq_max/

*/

#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int maximum = n;

    while(n!=0) {
        cin>>n;
        if(maximum<n) {
            maximum = n;
        }
    }

    cout<<maximum<<endl;
    
    return 0;
}