// https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PREP17

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--) {
        vector<int> a;
        vector<int> b;
        int n;
        cin>>n;
        for(int i =0; i<n; i++) {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i =0; i<n; i++) {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        int count = 0;
        for(int i =0; i<n; i++) {
            for(int j =0; j<n; j++) {
                if(a[i] == b[j]) {
                    count++;
                }
            }
        }
        
        cout<<count<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--) {
        vector<int> a;
        vector<int> b;
        int n;
        cin>>n;
        for(int i =0; i<n; i++) {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i =0; i<n; i++) {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        int count = 0;
        int i = 0, j = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        while(i<n && j<n) {
            if(a[i] == b[j]) {
                count++;
                i++;
                j++;
            } else if(a[i]<b[j]) {
                i++;
            } else if(a[i]>b[j]) {
                j++;
            }
        }

        cout<<count<<endl;
    }
}
