/*
Print only even numbers between 1 to 100;
*/

#include<iostream>

using namespace std;

int main() {

    int a = 1;

    while(a++<=100) {
        if(a%2 == 0) {
            cout<<a<<endl;     
        }
    }
    return 0;
}
