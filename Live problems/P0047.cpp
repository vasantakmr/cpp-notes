/*
longest common prefix of 2 strings

*/
#include<iostream>

using namespace std;

int main() {
    string str = "gurucodessomething";
    string str2 = "gurucodes";

    string temp ="";
    for(int i = 0; i<min(str.length(), str2.length()); i++) {
        if(str[i] == str2[i]) {
            temp = temp + str[i];
        } else {
            break;
        }
    }

    cout<<str<<endl;
    return 0;
}