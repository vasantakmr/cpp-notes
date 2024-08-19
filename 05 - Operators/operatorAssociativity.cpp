#include<iostream>

using namespace std;

int main() {
    int a = 100, b = 20, c = 10;  
    
    a = a / 10 * 20 % 27;  // (((a / 10) * 20) % 27) = (200) % 27 = 11

    // a = 11;

    a = b += c -= 35;   // b = b + 35 ; a = b; //  b = 20 + 35 = 55; a = 55

    cout<<a<<" "<<b<<endl;
    return 0;
}