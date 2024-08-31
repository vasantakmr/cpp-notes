#include<iostream>

using namespace std;

int main() {
    int a = 40;

    switch(a) {
        case 50:
            cout<<"A";
            break;
        case 40:
            cout<<"B";
            break;
        case 30:
            cout<<"C";
            break;
        case 20:
            cout<<"D";
            break;     
        default:
            cout<<"E";
    }

    return 0;
}