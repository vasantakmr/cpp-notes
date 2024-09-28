/*
print sum of numbers from 1 to 100 using for loop;
*/

#include<iostream>

using namespace std;

int main() {
    // int i = 1;
    // int sum = 0;
    // while(i <= 100) {
    //     sum = sum + i;
    //     i++;
    // }
    int sum = 0;
    
    for(int i = 1; i<=100;) {
        sum = sum + i;
        i++;
    }

    cout<<sum<<endl;
    return 0;
}