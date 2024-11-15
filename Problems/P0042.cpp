/*
given an array find the largest element of all the elements;
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

    int largest = INT_MIN;

    for(int i =0; i<n; i++) {
        if(studentMarks[i] > largest) {
            largest = studentMarks[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}