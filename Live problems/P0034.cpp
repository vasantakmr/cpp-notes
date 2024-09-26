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
#include<bits/stdc++.h>

using namespace std;

int main() {
    int num; 
    cin>>num;                       // 543
    string stringNumber = "";       // "43"
    while(num>0) {                  
        int unitDigit = num%10;     // 5
        stringNumber = to_string(unitDigit) + "\n" + stringNumber ;  //  "5" + "43" = "5\n4\n3"
        num = num/10;      //5         
    }
    cout<<stringNumber<<endl;
    return 0;
}