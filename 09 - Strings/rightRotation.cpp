#include<iostream>

using namespace std;

int main() {
    string str = "Gurucodes";
    cout<<"How many left rotations do you want?"<<endl;
    int noOfRotations;
    cin>>noOfRotations;
    
    string rotatedString = "";

    string firstHalf = str.substr((noOfRotations%str.length()), str.length()-(noOfRotations%str.length()));
    string secondHalf = str.substr(0, (noOfRotations%str.length()));
    rotatedString = firstHalf + secondHalf;
    
    cout<<rotatedString<<endl;
    return 0;
}