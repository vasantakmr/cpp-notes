/*
Write a C++ program to find the largest word in a given string.

Example:

Sample Input: C++ is a general purpose programming language.

Sample Output: programming
*/

#include<iostream>

using namespace std;

int main() {
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin, str);
    string maxLengthString = "";
    string tempString = "";
    int currentWordLength = 0;
    for(int i = 0; i<str.length(); i++) {
        currentWordLength++;
        if(str[i] == ' ') {
            if(currentWordLength > maxLengthString.length()) {
                maxLengthString = tempString;
            }
            currentWordLength = 0;
            tempString = "";
        } else {
            tempString = tempString + str[i];
        }
    }

    if(currentWordLength > maxLengthString.length()) {
        maxLengthString = tempString;
    }

    cout<<maxLengthString<<endl;

    return 0;
}