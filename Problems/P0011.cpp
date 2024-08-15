/*
Convert a uppercase letter to a lowercase letter.

example:

input = A

output = a

example 2:

input = K

output = k

*/


#include<iostream>

using namespace std;

int main() {
    
    char ch;
    cin>>ch;
    ch = ch + 32;

    cout<<ch<<endl;
    return 0;
}