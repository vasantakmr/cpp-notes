#include<iostream>

using namespace std;

int main() {
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    for(int i = 0; i<str.length(); i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    
    cout<<str<<endl;

    return 0;
}