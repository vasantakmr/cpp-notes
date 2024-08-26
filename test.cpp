#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2;

    cin>>x1>>y1>>x2>>y2;

    int xDiff, yDiff;

    xDiff = (x1-x2)
    yDiff = (y1-y2)

    if(xDiff<0) {
        xDiff *= -1;
    }

    if(yDiff<0) {
        yDiff *= -1;
    }

    if(xDiff == 1 && yDiff == 2) {
        cout<<"YES";
    } else if(xDiff == 2 && yDiff == 1) {
        cout<"YES";
    } else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}