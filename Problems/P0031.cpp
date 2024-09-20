/*
given a number. Reverse it. 


Input : 2003
Output: 3002

Input: 2020
Output: 0202 = 202
*/


#include<iostream>

using namespace std;

int main() {
    int num;
    cin>>num;                                       // 234

    int reverseNum = 0;                             // 0

    while(num>0) {                                  // false
        int remainder = num%10;                     // 2
        reverseNum = (reverseNum*10) + remainder;   // 432
        num = num/10;                               // 0
    }

    cout<<reverseNum<<endl;


    return 0;
}