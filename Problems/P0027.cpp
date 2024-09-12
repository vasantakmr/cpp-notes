/*
print sum of numbers from 1 to 100;
*/

#include<iostream>

using namespace std;

int main() {
    int i = 1;
    int sum = 0;
    while(i <= 100) {
        sum = sum + i;
        i++;
    }
    
    cout<<sum<<endl;
    return 0;
}