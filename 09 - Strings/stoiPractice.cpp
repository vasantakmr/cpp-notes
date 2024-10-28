#include<iostream>

using namespace std;

int main() {
    string str = "12.12";
    double a = stoll(str) + 20;
    
    cout<<a<<endl;
    return 0;
}