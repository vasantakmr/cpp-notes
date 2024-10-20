#include<iostream>

using namespace std;

void testScope() {
    int x, y;
    x = 10;
    y = 20;
    cout<<x<<"  "<<y<<endl;
}

int main() {
    int x = 10;
    int y = 10;
    testScope();
    //dsdsdsdsdsd
    //dsdsdsd
    cout<<x<<"  "<<y<<endl;
    return 0;
}