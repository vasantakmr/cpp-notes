/*
given an array find the average of all the elements;
*/


#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int studentMarks[n];
    for(int i = 0;i<n; i++) {
        cin>>studentMarks[i];
    }

    int sum = 0;
    for(int i =0; i<n; i++) {
        sum = sum + studentMarks[i];
    }
    cout<<(sum/n)<<endl;
    return 0;
}