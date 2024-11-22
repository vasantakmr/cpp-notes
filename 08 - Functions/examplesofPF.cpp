#include<iostream>

using namespace std;

void isPrime(int x) {
    bool isPrimeFlag = true;
    x = 100; 
    x- 30000;
    for(int i = 2; i<x; i++) {
        if(x%i == 0) {
            isPrimeFlag = false;
            break;
        }
    }

    if(isPrimeFlag) {
        cout<<x<<" is Prime"<<endl;
    } else {
        cout<<x<<" is not Prime"<<endl;
    }
}

int main() {
    isPrime(23);
    //dsdsdsdsdsd
    //dsdsdsd
    isPrime(45);

    return 0;
}