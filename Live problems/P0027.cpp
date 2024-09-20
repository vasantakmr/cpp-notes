/*
https://snakify.org/en/lessons/for_loop_range/problems/sum_of_cubes/
*/


#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;
    int i = 1;
    int sum = 0;
    while(i<=n) {
        sum = sum + (i*i*i);

        i++;
    }
    cout<<sum<<endl;

    return 0;
}