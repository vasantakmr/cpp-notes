/*
https://snakify.org/en/lessons/while_loop/problems/seq_len/
*/

#include<iostream>

using namespace std;

int main() {
    int count = 0;
    int n;
    cin>>n;
    while(n!=0) {
        count++;
        cin>>n;
    }
    cout<<count<<endl;

    return 0;
}


// while(true) {
//     int n;
//     cin>>n;
//     if(n == 0) {
//         cout<<count<<endl;
//         break;
//     }

//     count++;
// }