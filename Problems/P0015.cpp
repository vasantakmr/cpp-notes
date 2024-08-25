/* calculator

    Welcome to Gurucodes Calculator
    a. Addition
    b. Subtraction
    c. Multiplication
    d. Division

    Select any option:

    Enter 2 numbers: 

    Addition is: 

*/ 

#include<iostream>

using namespace std;

int main() {
    cout<<"Welcome to Gurucodes Calculator"<<endl;
    cout<<"a. Addition"<<endl;
    cout<<"b. Subtraction"<<endl;
    cout<<"c. Multiplication"<<endl;
    cout<<"d. Division"<<endl<<endl;
    cout<<"Select any option: "<<endl;

    char option;
    cin>>option;

    cout<<"Enter 2 Numbers: "<<endl;
    int num1, num2;
    cin>>num1>>num2;

    cout<<"Selected Option: "<<option<<"  Numbers are: "<<num1<<"  "<<num2<<endl;

    if(option == 'a') {
        cout<<"Addition is: "<<(num1+num2)<<endl;
    } else if(option == 'b') {
        cout<<"Subtraction is: "<<(num1-num2)<<endl;
    } else if(option == 'c') {
        cout<<"Multiplication is: "<<(num1*num2)<<endl;
    } else if(option == 'd') {
        cout<<"Division is: "<<(num1/num2)<<endl;
    } else {
        cout<<"Invalid Option"<<endl;
    }

    return 0;
}

// binary or and binary AND;

