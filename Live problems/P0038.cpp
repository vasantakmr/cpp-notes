#include<bits/stdc++.h>

using namespace std;


void printReverse() {
    int num;
    cin>>num;

    if(num != 0) {
        printReverse();
    }
    cout<<num<<endl;
}

int main() {

    printReverse();
    return 0;
}