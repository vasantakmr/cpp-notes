/*
given an array reverse all the elements;
*/


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int studentMarks[n];
    for(int i = 0;i<n; i++) {
        cin>>studentMarks[i];
    }

    for(int i =0; i<(n/2); i++) {
        int temp = studentMarks[i];
        studentMarks[i] = studentMarks[n-1-i];
        studentMarks[n-1-i] = temp;
    }

    for(int i =0 ;i<n; i++) {
        cout<<studentMarks[i]<<" ";
    }
    
    return 0;
}