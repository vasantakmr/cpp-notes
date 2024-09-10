/*
https://snakify.org/en/lessons/while_loop/problems/seq_num_even/


*/

#include<iostream>

using namespace std;

int main() {
    
    int countOfEvenNumbers = 0;

    while(true) {
        int num;
        cin>>num;
        if(num == 0) {
            break;
        }

        if(num%2 == 0) {
            countOfEvenNumbers++;
        }
    }

    cout<<countOfEvenNumbers<<endl;

    return 0;
}