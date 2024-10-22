#include<iostream>

using namespace std;

int main() {
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    int count = 0;
    for(int i = 0; i<str.length(); i++) {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
            count++;
        }
    }
    
    cout<<count<<endl;

    return 0;
}