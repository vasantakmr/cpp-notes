/*
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, y, a, b;
        cin>>x>>y>>a>>b;
        int noOfMedalsChefCanWin = 0;
        if(!(x == a || x == b)) {
            noOfMedalsChefCanWin++;
        }
        
        if(!(y == a || y == b)) {
            noOfMedalsChefCanWin++;
        }

        cout<<noOfMedalsChefCanWin<<endl;
    }

}