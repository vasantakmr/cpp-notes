#include<iostream>

using namespace std;

int a = 200, b = 500;

void testScope() {
    cout<<"In TestsCope"<<endl;
    int x, y;
    x = 10;
    y = 20;
    x = x+100;
    a = a+100;
    cout<<"x value is "<<x<<"  y value is "<<y<<endl;
    cout<<"a value is "<<a<<"  b value is "<<b<<endl;

}

int main() {
    int x = 10;
    int y = 10;
    testScope();
    //dsdsdsdsdsd
    //dsdsdsd
    cout<<"In Main"<<endl;
    cout<<"x value is "<<x<<"  y value is "<<y<<endl;
    cout<<"a value is "<<a<<"  b value is "<<b<<endl;

    return 0;
}