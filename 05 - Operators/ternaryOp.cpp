#include<iostream>

using namespace std;

int main() {
    int age = 10;

    bool isEligible, isATeenager;

    isEligible = (age>=18) ? true : false;
    
    isATeenager = ((age>=13) && (age<18)) ? true : false;

    string isEligibleToVoteString = isEligible ? "Is Eligible" : "Is Not Eligible";
    string isATeenagerString = isATeenager ? "Is A Teenager" : "Is Not a Teenager";

    cout<<"Is eligible to vote?   "<<isEligible<<"  "<<isEligibleToVoteString<< endl;
    cout<<"Is a teenager?   "<<isATeenager<<"  "<<isATeenagerString<<endl;

    return 0;
}