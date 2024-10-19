#include<iostream>

using namespace std;

int powerXY(int x, int y) {
    int power = 1;

    for(int i = 0; i<y; i++) {
        power = power * x;
    }

    return power;
}

int main() {

    cout<<"Before Function Call"<<endl;
    int a = powerXY(2,12);

    if(a>20) {
        cout<<"a is exceeding 20"<<endl;
    } else {
        cout<<"a is not exceeding 20"<<endl;
    }
    cout<<"After Function Call"<<endl;

    return 0;
}

