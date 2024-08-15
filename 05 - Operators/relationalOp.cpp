#include<iostream>

using namespace std;

int main() {
    int a , b;  
    
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    
    cout<<"Is A equal to B?  "<<(a==b)<<endl;
    cout<<"Is A not equal to B?  "<<(a!=b)<<endl;
    cout<<"Is A greater than B?  "<<(a>b)<<endl;
    cout<<"Is A greater than or equal to B?  "<<(a>=b)<<endl;
    cout<<"Is A less than B?  "<<(a<b)<<endl;
    cout<<"Is A less than or equal to B?  "<<(a<=b)<<endl;

    return 0;
}