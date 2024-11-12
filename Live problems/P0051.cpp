/*
given a string, find out the maximum number of times the any particular character has occurred contiguously in the string 

input: gurucoooodesoooo

out: 4
*/


#include<iostream>

using namespace std;

int main() {
    string str;
    cin>>str;
    int count = 1, maxCount = 1;
    char ch = str[0];
    for(int i = 0; i<str.length() - 1; i++) {
        if(str[i] == str[i+1]) {
            count++;
            if(count>=maxCount) {
                maxCount = count;
                ch = str[i];
            }
        } else {
            count = 1;
        }
    }
    cout<<maxCount<<endl;
    cout<<ch<<endl;
    return 0;
}
