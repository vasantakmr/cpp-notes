#include<iostream>

using namespace std;

string stringReverse(string str) {
    string rev = "";
    for(int i =0; i<str.length(); i++) {
        rev = str[i] + rev;
    }
    return rev;
}

string stringReverse2(string str) {
    
    for(int i = 0; i<str.length()/2; i++) {
        char temp = str[i];
        str[i] = str[str.length()-1-i];
        str[str.length()-1-i] = temp;
    }
    
    return str;
}


int main() {
    string str;
    cin>>str;

    if(str == stringReverse2(str)) {
        cout<<"Palindrome"<<endl;
    } else {
        cout<<"not a palindrome"<<endl;
    }
    
    return 0;
}