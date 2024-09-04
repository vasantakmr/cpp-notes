// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST

#include <bits/stdc++.h>
using namespace std;

int main() {
    int noOfTestCases;

    cin>>noOfTestCases; 

    while(noOfTestCases--) {
        int a, b, k;
        cin>>a>>b>>k;
        int res = 0;
        int diff = abs(a - b); // a-b = -2 , abs(-2) = 2
        // if(a-b <0) {
        //     diff = -1 * (a-b);
        // }
        res = diff/k;
        if(diff%k != 0) {
            res++;
        }
        cout<<res<<endl;
    }
    
}
