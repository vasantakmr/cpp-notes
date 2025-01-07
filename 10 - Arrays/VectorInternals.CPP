#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> studentMarks(20, 0);
    
    studentMarks[2] = 20;
    studentMarks[4] = 30;
    
    cout<<"Before insertion"<<studentMarks.size()<<endl;
    cout<<"Before insertion"<<studentMarks.capacity()<<endl;
    studentMarks.push_back(10);
    cout<<"aFTER insertion"<<studentMarks.size()<<endl;
    cout<<"After insertion"<<studentMarks.capacity()<<endl;

    return 0;
}