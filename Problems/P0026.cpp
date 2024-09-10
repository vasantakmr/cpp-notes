/*
print all the even numbers from 0 to 100
*/

#include<iostream>

using namespace std;

int main() {
    int i = 0;

    while(i<=100) {
        i++;
        if(i%2 == 1) {
            continue;
        }

        cout<<i<<endl;
    }
    return 0;
}