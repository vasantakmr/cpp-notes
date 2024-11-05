/*
https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?page=1&category=Strings&sortBy=submissions
*/

#include<iostream>

using namespace std;

int main() {
    string str = "i.like.this.program.very.much";
    string rev = "";
    string temp = "";
    for(int i =0; i<str.length(); i++) {
        if(str[i] == '.') {
            rev = "." + temp + rev;
            temp = "";
        } else {
            temp = temp + str[i];
        }
    }
    rev = temp + rev;

    cout<<rev<<endl;
    
    return 0;
}