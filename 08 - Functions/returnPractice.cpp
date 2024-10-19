#include<iostream>

using namespace std;

void printGurucodes() {
    return;
    cout<<"Gurucodes"<<endl;
}

string returnGurucodes() {
    return "Gurucodes";
}


int main() {

    cout<<"Before Function Call"<<endl;
    //printGurucodes();
    cout<<returnGurucodes()<<endl;
    cout<<"After Function Call"<<endl;

    return 0;
}

