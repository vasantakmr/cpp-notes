#include<iostream>

using namespace std;

int main() {
    int a, b;
    
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<"a | b?  "<<(a|b)<<endl;
    cout<<"a & b?  "<<(a&b)<<endl;
    cout<<"a ^ b?  "<<(a^b)<<endl;
    cout<<"~a?  "<<(~a)<<endl;
    cout<<"a << 2?  "<<(a<<2)<<endl;
    cout<<"a >> 1?  "<<(a>>1)<<endl;


    return 0;
}