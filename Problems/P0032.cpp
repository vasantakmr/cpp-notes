/*
find out if a number is palindrome

input: 2002  
output: is a palindrome

input: 2003
Output: is not a palindrome

*/


#include<iostream>

using namespace std;

int main() {
    int num;
    cin>>num;                                       // 234
    int originalNum = num;
    int reverseNum = 0;                             // 0

    while(num>0) {                                  // false
        int remainder = num%10;                     // 2
        reverseNum = (reverseNum*10) + remainder;   // 432
        num = num/10;                               // 0
    }

    if(originalNum == reverseNum) {
        cout<<"Is a palindrome"<<endl;
    } else {
        cout<<"Is not a palindrome"<<endl;
    }


    return 0;
}