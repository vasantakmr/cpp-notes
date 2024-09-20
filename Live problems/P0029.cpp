/*
https://snakify.org/en/lessons/for_loop_range/problems/factorial/
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;                                             

    int i = 1;                                             
    int factorialSum = 0;
    int nextFactorial = 1;

    while(i<=n) {
        nextFactorial = nextFactorial * i;
        factorialSum = factorialSum + nextFactorial;
        i++;
    }
    cout<<factorialSum<<endl;
    return  0;

}




// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cin>>n;                                     

//     int factorialSum = 0;                          
//     int i = 1;

//     while(i<=n) {                                
//         int j = 1;
//         int factorial = 1;
//         while(j<=i) {
//             factorial = factorial * j;
//             j++;
//         }
//         factorialSum = factorialSum + factorial;
//         i++;
//     }

//     cout<<factorialSum<<endl;
//     return 0;
// }