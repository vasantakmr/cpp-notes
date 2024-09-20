/* 

https://snakify.org/en/lessons/while_loop/problems/kth_fibonacci/  */


#include<bits/stdc++.h>

using namespace std;

int main() {

    int n1 = 1;
    int n2 = 0;
    int num;
    cin>>num;

    if(num == 0) {
        cout<< 0<<endl;
        return 0;
    }
    if(num == 1) {
        cout<< 1<<endl;
        return 0;
    }
    // int i = 0;
    // while(i<num-1) {
    //     n = n1+n2;
    //     n2 = n1;
    //     n1 = n;
    //     i++;
    // }

    num--;
    while(num--) {
        n = n1+ n2;
        n2 = n1;
        n1 = n;
    }
    cout<<n<<endl;

    return 0;
}