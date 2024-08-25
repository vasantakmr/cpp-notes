#include<iostream>

using namespace std;

int main() {

    int num;

    cin>>num;
    
    if(num%4 == 0 && num%100!=0) {
        cout<<"LEAP"<<endl;
    } else if(num%400==0) {
        cout<<"LEAP"<<endl;
    } else {
        cout<<"COMMON"<<endl;
    }

    // if((num%4 == 0 && num%100!=0) || (num%400==0)) {
    //     cout<<"LEAP"<<endl;
    // } else {
    //     cout<<"COMMON"<<endl;
    // }
    
    return 0;
}