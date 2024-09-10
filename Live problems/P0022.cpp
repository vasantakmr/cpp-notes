/*
https://snakify.org/en/lessons/while_loop/problems/seq_increasing_neighbours/

*/

#include<bits/stdc++.h>

using namespace std;

int main() {

    int count = 0;
    int current = INT_MAX;
    int previous = 0;
    while(true) {
        previous = current;
        int num;
        cin>>num;
        current = num;
        if(num==0) {
            break;
        }

        if(previous<current) {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}

