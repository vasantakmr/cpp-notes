// https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/DSAPROB15
#include <bits/stdc++.h>
using namespace std;

long long countPairsLessThanX(vector<int>& arr, int x) {
    long long pairs = 0;
    for(int i =0; i<arr.size(); i++) {
        for(int j = i+1; j<arr.size(); j++) {
            if(arr[i]+arr[j]<x) {
                pairs++;
            }
        }
    }
    return pairs;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << countPairsLessThanX(arr, x) << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

long long countPairsLessThanX(vector<int>& arr, int x) {
    long long pairs = 0;
    int n= arr.size();
    int i =0, j = n-1;
    while(i<j) {
        if(arr[i]+arr[j]>=x) {
            j--;
        } else {
            pairs = pairs + (j-i);
            i++;
        }
    }
    
    return pairs;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << countPairsLessThanX(arr, x) << endl;
    return 0;
}