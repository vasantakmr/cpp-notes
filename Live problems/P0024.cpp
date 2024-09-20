/*
https://snakify.org/en/lessons/while_loop/problems/seq_num_maximal/
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int maximum = 0; 
    int count = 0;

    while(true) {
        int num;
        cin>>num;
        if(num == 0) {
            break;
        }

        if(num>maximum) {
            count = 1;
            maximum = num;
        } else if(num == maximum) {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}