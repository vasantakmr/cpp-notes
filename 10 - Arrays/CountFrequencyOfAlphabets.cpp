#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "";
    cin>>s;
    vector<int> frequency(26, 0);
    
    for(int i =0; i<s.size(); i++) {
        int index = s[i] - 97;
        frequency[index]++;
    }

    for(int i = 0; i<26; i++) {
        cout<<frequency[i]<<"  ";
    }
    return 0;
}