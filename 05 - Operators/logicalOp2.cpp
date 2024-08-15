#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    
    a = 10;
    b = 20;
    c = 30;

    cout<<"(a>=10) && (b>=10)?  "<<((a>=10) && (b>=10))<<endl;
    cout<<"(a!=20) && (b>=c)?  "<<((a!=20) && (b>=c))<<endl;
    cout<<"(a>=10) || (b>=10)?  "<<((a>=10) || (b>=10))<<endl;
    cout<<"(a!=20) || (b>=c)?  "<<((a!=20) || (b>=c))<<endl;

    cout<<"!((a!=20) || (b>=c))?  "<<(!((a!=20) || (b>=c)))<<endl;

    return 0;
}