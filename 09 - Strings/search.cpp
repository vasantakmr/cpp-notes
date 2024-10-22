#include<iostream>

using namespace std;

int main() {
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<"Enter the character which you want to search"<<endl;
    char searchChar;
    cin>>searchChar;
    int count = 0;
    for(int i = 0; i<str.length(); i++) {
        if(str[i] == searchChar) {
            count++;
        }
    }
    
    cout<<count<<endl;

    return 0;
}