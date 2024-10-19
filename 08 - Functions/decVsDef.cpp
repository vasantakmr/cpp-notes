#include<iostream>

using namespace std;

void printA5Times();
void printGurucodes();

int main() {
    cout<<"Before Function Call"<<endl;
    printA5Times();
    printGurucodes();
    cout<<"After Function Call"<<endl;
    return 0;
}

void printA5Times() {
    cout<<"Inside the function"<<endl;
    cout<<"AAAAA"<<endl;
}

void printGurucodes() {
    cout<<"Inside the printGurucodes function"<<endl;
    cout<<"GuruCodes"<<endl;
}
