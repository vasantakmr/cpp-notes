#include<iostream>

using namespace std;

int main() {
    int a = 0;   // 1   2   3   4

    while(a<10) {
        int b = 20;
        cout<<a<<" b value is: "<<b<<endl;
        a = a+1;
        b = 40;
    }

    return 0;
}