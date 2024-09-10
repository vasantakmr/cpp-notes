/*
print 2 power x;

2 power 3 = 8;

*/

#include<iostream>

using namespace std;

int main() {

    int x;          
    cin>>x;             // 3
    int ans = 1;            //2*2*2
    int i = 0;                  //4
    while(i<x) {
        ans = ans*2;
        i++;
    }

    cout<<ans<<endl;

    return 0;
}