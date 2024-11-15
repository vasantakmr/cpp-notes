/*
given an array find the smallest element of all the elements;
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

    int smallest = INT_MAX;

    for(int i =0; i<n; i++) {
        if(studentMarks[i] < smallest) {
            smallest = studentMarks[i];
        }
    }

    cout<<smallest<<endl;
    return 0;
}