/*
    Find if the given year is a leap year.

    Input 2004

    output "Leap Year";

    Input 2003

    output "Not a Leap Year";

    A year is a leap year if:
    1. it is divisible by 4 and
    2. It is not divible by 100 but it can be divisible by 400;

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int year;
    cin>>year;

    bool isLeapYear = false;

    

    if((year % 4 == 0) && ((year%100!=0) || year%400 == 0)) {
        isLeapYear = true;
    }
    

    cout<<isLeapYear<<endl;

    return 0;
}
