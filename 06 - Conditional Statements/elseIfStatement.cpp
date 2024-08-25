#include<iostream>

using namespace std;

int main() {
    int age = 12;

    cout<<"Enter age: ";
    cin>>age;

    if(age<13) {
        cout<<"Is a Toddler"<<endl;
    } else if(age>=13 && age<18) {
        cout<<"Is a Teenager";
    } else if(age>=18 && age<=60) {
        cout<<"Is an Adult"<<endl;
    } else if(age>60) {
        cout<<"is a senior Citizen";
    }
    
    return 0;
}