/*
https://snakify.org/en/lessons/while_loop/problems/seq_avg/

*/

#include<iostream>

using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    int n;
    cin>>n;
    while(n!=0) {
        sum = sum + n;
        count++;
        cin>>n;
    }
    float avg = (float)sum/count;
    cout<<avg<<endl;

    return 0;
}
