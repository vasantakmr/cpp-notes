#include<iostream>

using namespace std;

int main() {
    int a, b;
    a = 100;
    b = 50;
    a = b;
    a = a+a;
    b = b+a;

    cout<<a <<endl;
    cout<<b<<endl;

    a = a*a;
    b = a + 100;

    cout<<a<<endl;
    cout<<b;

    return 0;
}