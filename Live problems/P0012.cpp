/*
https://snakify.org/en/lessons/while_loop/problems/least_divisor/*/


#include<iostream>

using namespace std;

int main() {

    int n;
    cin>>n;  
    int divisor = n;  
    int ans = 0;
    while(divisor>1) {              
        if(n%divisor == 0) {
            ans = divisor;
        }
        divisor--;
    }

    cout<<ans<<endl;
    return 0;
}



// #include<iostream>

// using namespace std;

// int main() {

//     int n;
//     cin>>n;  
//     int divisor = 2;  
//     while(divisor<=n) {
//         if(n%divisor == 0) {
//             cout<<divisor<<endl;
//             break;
//         }
//         divisor++;
//     }

//     return 0;
// }