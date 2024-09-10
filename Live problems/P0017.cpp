/*
https://snakify.org/en/lessons/while_loop/problems/eq_sum/

*/

#include<iostream>

using namespace std;

int main() {
    int sum = 0;
    int n;
    cin>>n;
    while(n!=0) {
        sum = sum + n;
        cin>>n;
    }
    cout<<sum<<endl;

    return 0;
}

