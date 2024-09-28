#include<iostream>

using namespace std;

int main() {
    
    cout<<"Print A for 5 times"<<endl;
    int k = 0;
    for(int i=0; i<5; i++) {
        int j = 0;
        cout<<"i value is: "<<i<<endl;
        cout<<"j value is: "<<j<<endl;
        cout<<"k value is: "<<k<<endl;
        j = 10;
    }
    cout<<"i value is: "<<i<<endl;
    cout<<"j value is: "<<j<<endl;
    cout<<"k value is: "<<k<<endl;

    return 0;
}