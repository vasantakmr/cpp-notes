#include <iostream>

using namespace std;

int main()
{
    int studentMarks[5] = {10, 20, 30, 40, 50};

    int studentMarksSize = sizeof(studentMarks)/sizeof(studentMarks[0]);

    studentMarks[0] = 30;
    for(int i =0; i<studentMarksSize; i++) {
        studentMarks[i] = 30*i;
    }

    for(int i = 0; i<studentMarksSize; i++) {
        cout<<studentMarks[i]<<" ";
    }

    return 0;
}