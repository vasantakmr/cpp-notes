// Given a string and a character, remove all the occurrences of the character in the string
#include <bits/stdc++.h>

using namespace std;

void removeOccurancesofCh(string str, char ch) {

    string ans = "";

    for(int i =0; i<str.length(); i++) {
        if(str[i] != ch) {
            ans = ans + str[i];
        }
    }

    cout<<ans<<endl;

}

int main()
{
    vector<pair<string, char>> arr;

    arr.push_back(make_pair("helloworld", 'h'));
    arr.push_back(make_pair("helloworld", 'w'));
    arr.push_back(make_pair("helloworld", 'e'));
    arr.push_back(make_pair("helloworld", 'o'));
    arr.push_back(make_pair("helloworld", 'd'));
    arr.push_back(make_pair("helloworld", 'l'));

    for(int i = 0; i<arr.size(); i++) {
        removeOccurancesofCh(arr[i].first, arr[i].second);
    }

    return 0;
}