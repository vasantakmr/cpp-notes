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

int addition(int a, int b) {
    return a+b;
}
int subtraction(int a, int b) {
    return a-b;
}

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
        int value = addition(num1, num2);
        cout<<value<<endl;
        return 0;
    }

    if(option == 'b') {
        cout<<"Subtraction is: "<<subtraction(num1, num2)<<endl;
        return  0;
    }

    if(option == 'c') {
        cout<<"Multiplication is: "<<(num1*num2)<<endl;
        return 0;
    }

    if(option == 'd') {
        cout<<"Division is: "<<(num1/num2)<<endl;
    } else {
        cout<<"Invalid Option"<<endl;
    }

    return 0;
}