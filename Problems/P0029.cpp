/*

Print the digits of a number;

example: 243

output: 
3
4
2

process:
1. Find the %10 of the number. gives us the unit digit.
2. Divide the number with 10. 
3. If number after division is greater than 0, go to step 1. 

*/
#include<iostream>

using namespace std;

int main() {
    int num; 
    cin>>num;                       // 343

    while(num>0) {                  // true
        int unitDigit = num%10;     // 3%10 = 3
        cout<<unitDigit<<endl;      // 3
        num = num/10;               // num = 3/10 = 0
    }

    return 0;
}