/*
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3, b1, b2, b3;

    cin>>a1>>a2>>a3>>b1>>b2>>b3;

    int alice = a1+a2+a3, bob = b1+b2+b3, sA, sB;
    
    sA = (a1<a2 && a1<a3) ? a1: (a2<a3 && a2<a1) ? a2: a3; 
    sB = (b1<b2 && b1<b3) ? b1: (b2<b3 && b2<b1) ? b2: b3; 

    // if(a1<a2 && a1<a3) {
    //     sA = a1;
    // } else if(a2<a3 && a2<a1) {
    //     sA = a2;
    // } else {
    //     sA = a3;
    // } 

    // if(b1<b2 && b1<b3) {
    //     sB = b1;
    // } else if(b2<b3 && b2<b1) {
    //     sB = b2;
    // } else {
    //     sB = b3;
    // }

    alice -= sA;
    bob -= sB;

    if(alice>bob) {
        cout<<"Alice";
    } else if(bob>alice) {
        cout<<"BOB";
    } else {
        cout<<"TIE";
    }

    return 0;
}