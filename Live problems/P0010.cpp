// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF


#include <bits/stdc++.h>
using namespace std;

int main() {

    int noOfTestCases;
    cin>>noOfTestCases;

    while(noOfTestCases--) {
        int x, y, z;
        cin>>x>>y>>z;

        int totalStudents = x*y;

        int passPercentage = ((float)z/totalStudents) * 100;

        if(passPercentage>50) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

    
/*

int x,y,z;
cin>>x>>y>>z;
if(z<(x*y))
{
    if(z>((x*y)/2))
    {
    cout<<"yes"<<endl;
    } else
    {
        cout<<"no"<<endl;
    }
}
else {
    cout<<"no";
}

*/