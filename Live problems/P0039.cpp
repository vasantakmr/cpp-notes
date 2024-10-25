// reverse of a string is equal to the string itself

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str; // gurucodes
    string stringRev = ""; // urug
    for(int i =0; i<str.length(); i++) {
        stringRev = str[i] + stringRev;
    }

    if(str == stringRev) {
        cout<<"is a palindrome";
    } else {
                cout<<"not a palindrome";

    }

    return 0;
}