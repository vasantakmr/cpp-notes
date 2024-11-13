#include <bits/stdc++.h>

using namespace std;

int main()
{
    int studentMarks[5];
    int sizeOfClass = sizeof(studentMarks)/sizeof(studentMarks[0]);
    cout<<"Enter the 5 values for the array: "<<endl;

    for(int i = 0; i<sizeOfClass; i++) {
        cin>>studentMarks[i];
    }
    
    int removeIndex = 2; 

    for(int i =0; i<sizeOfClass-1; i++) {
        if(i>=removeIndex) {
            studentMarks[i] = studentMarks[i+1];
        }
    }
    
    sort(studentMarks, studentMarks+3, greater<int>());

    for(int i = 0; i<sizeOfClass; i++) {
        cout<<studentMarks[i]<<endl;
    }

    return 0;
}