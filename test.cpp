#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;

    cout<<"Enter n, m, k:";

    cin>>n>>m>>k;

    if(k%n==0 || k%m == 0) {
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    
    // cout<<((k%n==0 || k%m == 0)? "YES": "NO")<<endl;

    return 0;
}