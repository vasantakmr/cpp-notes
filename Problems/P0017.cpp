#include<iostream>

using namespace std;

int main() {

    int a;

    cin>>a;

    if(a>0) {
        cout<<1<<endl;
    } else if(a<0) {
        cout<<"-1"<<endl;
    } else if(a == 0) {
        cout<<0<<endl;
    }
    
    return 0;
}