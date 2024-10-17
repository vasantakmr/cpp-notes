#include<iostream>

using namespace std;

void printA5Times() {
    cout<<"Inside the function"<<endl;
    cout<<"AAAAA"<<endl;
}

int main() {
    cout<<"Before Function Call"<<endl;
    printA5Times();
    cout<<"After Function Call"<<endl;
    return 0;
}