/*
Average of 3 numbers

3
6
9

(9+6+3)/3 = 6

*/

#include<iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    cout<<"Enter 3 numbers: ";
    float d;
    cin>>a>>b>>c;
    d = (a+b+c)/3.0;
    
    cout<<d<<endl;
    
    return 0;
}