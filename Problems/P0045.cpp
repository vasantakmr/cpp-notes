#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    cout<<"Enter n value: "<<endl;
    cin>>n;
    vector<int> frequency(26, 0);
    
    for(int i = 0; i<s.size(); i++) {
        int element = s[i] - 97;
        if(i>=1 && s[i] == s[i-1]) {
            continue;
        }
        frequency[element]++;
    }
    int count = 0;
    for(int i =0; i<frequency.size(); i++) {
        if(n == frequency[i]) {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}