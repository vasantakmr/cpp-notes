/*
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHESSDIST
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x1, x2, y1, y2;

    cin>>x1>>y1>>x2>>y2;

    int xDiff = x1 - x2;

    int yDiff = y1 - y2;

    xDiff = abs(xDiff);
    yDiff = abs(yDiff);

    int maximum;

    if(xDiff>yDiff) {
        cout<<xDiff<<endl;
    } else {
        cout<<yDiff<<endl;
    }

    return 0;
}
