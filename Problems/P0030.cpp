/*

Sum of digits of a number;

example: 243

output: 
9

process:
1. Find the %10 of the number. gives us the unit digit.
2. add this unit digit to the sum variable.
3. Divide the number with 10. 
4. If number after division is greater than 0, go to step 1. 

*/
#include<iostream>

using namespace std;

int main() {
    int num; 
    cin>>num;                       // 345
    int sum = 0;                    // 0
    while(num>0) {                  // true
        int unitDigit = num%10;     // 3%10 = 3
        sum = sum + unitDigit;      // sum = 12
        num = num/10;               // num = 3/10 = 0
    }

    cout<<sum<<endl;
    return 0;
}