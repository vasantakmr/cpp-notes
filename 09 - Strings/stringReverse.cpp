#include<iostream>

using namespace std;

int main() {
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str; // gurucodes
    string stringRev = ""; // urug
    for(int i =0; i<str.length(); i++) {
        stringRev = str[i] + stringRev;
    }

    cout<<stringRev<<endl;
    return 0;
}