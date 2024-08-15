#include<iostream>

using namespace std;

int main() {
    bool a, b;
    
    a = true;
    b = false;

    cout<<"A && B?  "<<(a&&b)<<endl;
    cout<<"A || B?  "<<(a||b)<<endl;

    cout<<"!B?  "<<(!b)<<endl;

    return 0;
}