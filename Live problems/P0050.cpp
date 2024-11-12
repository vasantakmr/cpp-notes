/*
given a string and a character, find out the maximum number of times the character has occurred contiguously in the string 

input: gurucoooodesoooo
character: o

out: 4
*/


#include<iostream>

using namespace std;

int main() {
    string str;
    char ch;
    cin>>str;
    cin>>ch;
    int count = 0; 
    int maxCount = 0;
    for(int i =0; i<str.length(); i++) {
        if(str[i] == ch) {
            count++;
            if(count>maxCount) {
                maxCount = count;
            }
        } else {
            
            count = 0;
        }
    }
    
    cout<<maxCount<<endl;
    return 0;
}