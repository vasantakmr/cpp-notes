/*
https://snakify.org/en/lessons/while_loop/problems/list_of_squares/
*/

#include<iostream>

using namespace std;

int main() {

    int n;
    cin>>n;                  
    int i = 1;

    while(i*i<=n) {
        cout<<i*i<<endl;
        i++;
    }

    return 0;
}

