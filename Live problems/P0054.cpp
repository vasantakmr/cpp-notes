#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    if(n<=0) return 0;
    int arr[n];
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }

    int uniqueElementsCount = 1;
    for(int i =0; i<n-1; i++) {
        if(arr[i] != arr[i+1]) {
            uniqueElementsCount++;
        }
    }

    cout<<uniqueElementsCount<<endl;

    return 0;
}