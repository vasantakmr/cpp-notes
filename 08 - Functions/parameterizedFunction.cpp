#include<iostream>

using namespace std;

void isOddOrEven(int x) {
    if(x%2) {
        cout<<x<<" is Odd Number"<<endl;
    } else {
        cout<<x<<" is Even Number"<<endl;
    }
}

int main() {
    isOddOrEven(22);
    isOddOrEven(24);
    isOddOrEven(35);

    return 0;
}