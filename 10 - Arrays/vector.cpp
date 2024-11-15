#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> studentMarks(20, 0);
    
    studentMarks[2] = 20;
    studentMarks[4] = 30;
    studentMarks.erase(studentMarks.begin()+3, studentMarks.begin()+6);
    for(int i =0; i<studentMarks.size(); i++) {
        cout<<studentMarks[i]<<" ";
    }
    
    return 0;
}