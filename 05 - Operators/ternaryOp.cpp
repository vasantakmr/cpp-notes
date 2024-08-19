#include<iostream>

using namespace std;

int main() {
    int age;

    cout<<"Enter the person's age"<<endl;
    cin>>age;
    string isEligibleToVote;
    char isATeenager;

    isEligibleToVote = (age>=18) ? "The person is eligible to vote": "The person is not eligible to vote";
    isATeenager = ((age>=13) && (age<18)) ? 'Y' : 'N';
    cout<<isEligibleToVote<<endl;
    cout<<isATeenager<<endl;


    return 0;
}