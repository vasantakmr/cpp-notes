/*
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERCOOLER2

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;

    int numOfMonths = (y/x);

    if(y%x == 0) {
        numOfMonths = (y/x) - 1;
    }

    cout<<numOfMonths<<endl;
    return 0;
}

