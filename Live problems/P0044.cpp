/*
https://snakify.org/en/lessons/strings_str/problems/reverse_fragment/
*/

#include<iostream>

using namespace std;

int main() {
    string str;
    cin>>str;
    int firstHPosition = -1;
    int lastHPosition = str.length() - 1;
    
    for(int i =0; i<str.length(); i++) {
        if(firstHPosition == -1 && str[i] == 'h') {
            firstHPosition = i;
        } 
        if(str[i] == 'h') {
            lastHPosition = i;
        }
    }

    while(firstHPosition<lastHPosition) {
        char temp = str[firstHPosition];
        str[firstHPosition] = str[lastHPosition];
        str[lastHPosition] = temp;
        lastHPosition--;
        firstHPosition++;
    } 

    cout<<str<<endl;

    return 0;
}