/*
given a string interpret it as a binary string and convert it to a base 10 number.

input: 10
output: 2

input: 1010
output: 10

input: 100
output: 4

1. read the string
2. 1 * 2^2 
3. result is just the addition. 
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>>str;
    int sum = 0;
    for(int i = 0; i<str.length(); i++) {
        if(str[str.length() - i - 1] == '1') {
            sum = sum + (pow(2, i));
        }
    }
    
    cout<<sum<<endl;
    return 0;
}

