// https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/DSAPROB20
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> a;
    vector<int> b;
    int n, m;
    cin>>n>>m;
    for(int i =0; i<n; i++) {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(int i =0; i<m; i++) {
        int temp;
        cin>>temp;
        b.push_back(temp);
    }
    int i = n-1, j = m-1;
    int ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while(i>=0 && j>=0) {
        if(a[i] == b[j]) {
            ans = b[j];
            break;
        } else if(a[i]<b[j]) {
            j--;
        } else if(a[i]>b[j]) {
            i--;
        }
    }

    if(ans == 0) {
        cout<<"-1"<<endl;
    } else {
        cout<<ans<<endl;
    }

}