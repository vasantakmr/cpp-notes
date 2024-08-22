/*
age>=18 print is an adult

age<18 print is a teenager/toddler
*/

#include<iostream>

using namespace std;

int main() {
    int age;

    cout<<"Enter Age: ";
    cin>>age;

    if(age>=18) {
        cout<<"is an adult"<<endl;
    } else {
        cout<<"Is a teenager/toddler"<<endl;
    }
    
    return 0;
}