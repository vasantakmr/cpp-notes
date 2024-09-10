/*
https://snakify.org/en/lessons/while_loop/problems/seq_second_max/

*/


#include<bits/stdc++.h>

using namespace std;

int main() {
    int maximum =0; 
    int secondMaximum = 0;

    while(true) {
        int num;
        cin>>num;
        if(num == 0) {
            break;
        }
        if(num>=maximum) {
            secondMaximum = maximum;
            maximum = num;
        }
        if(num>secondMaximum && num<maximum) {
            secondMaximum = num;
        }
    }

    cout<<secondMaximum<<endl;
    return 0;
}