#include<iostream>

using namespace std;

int main() {

    int a, b;

    cin>>a>>b;

    int minimum;

    if(a<b) {
        minimum = a;
    } else {
        minimum = b;
    }

    cout<<"Minimum is: "<<minimum<<endl;
    
    return 0;
}