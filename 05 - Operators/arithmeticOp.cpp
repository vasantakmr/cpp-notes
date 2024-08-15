#include<iostream>

using namespace std;

int main() {
    int a , b;  
    
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    
    int addition, subtraction, multiplication, division, modulo;

    addition = a+b;

    subtraction = a-b;

    multiplication = a * b;

    division = a/b;

    modulo = a%b;
    
    cout<<"Addition: "<<addition<<endl<<"Subtraction: "<<subtraction<<endl;
    cout<<"Multiplication: "<<multiplication<<endl<<"Division: "<<division<<endl;
    cout<<"Modulo: "<<modulo<<endl;
    
    return 0;
}