#include<iostream>

using namespace std;

int main() {
    string str = "hello from gurucodes!, welcome you all to the preogramming and dsa course.";
    string tempString = "";
    for(int i =0; i<str.length(); i++) {
        if(str[i] != ' ') {
            tempString = tempString + str[i];
        } else if(str[i] == ' ') {
            cout<<tempString<<endl;
            tempString = "";
        }
    }
    cout<<tempString<<endl;
    return 0;
}