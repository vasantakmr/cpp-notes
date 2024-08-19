#include<iostream>

using namespace std;

int main() {
    int a = 100;  
    
    a = a - 10 ^ 23 + 44;  // ((a - 10) ^ (23 + 44))        90 ^ 67

    cout<<a<<endl;
    return 0;
}