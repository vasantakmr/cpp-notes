/*
find out if a number is prime number

example: 
input: 23
Output: Prime

Example: 
input: 22
Output: Not Prime
*/

#include<iostream>

using namespace std;

int main() {
    int num;                
    cin>>num;                               // 4
    bool isPrime = true;                    // false
    int i = 2;                              // 2
    while(i<=(num/2)) {                          // true
        if(num%i == 0) {                    
            isPrime = false;
            break;
        }

        i++;
    }

    if(isPrime) {
        cout<<"Prime"<<endl;
    } else {
        cout<<"Not Prime"<<endl;
    }

    return 0;
}