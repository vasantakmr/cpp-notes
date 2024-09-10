/*
https://snakify.org/en/lessons/while_loop/problems/seq_index_of_max/

*/

#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int maximum = n;
    int index = 1;
    int ansIndex = index;
    while(n!=0) {
        cin>>n;
        index++;

        if(maximum<n) {
            maximum = n;
            ansIndex = index;
        }

    }
    cout<<ansIndex<<endl;
    return 0;
}