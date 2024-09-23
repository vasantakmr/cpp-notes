/*
Read the input till you dont get the input anymore. 

Example:

input: 
1
3
2
5
3
4
3
2
4
5
4
3
45


*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "";
    do {
        getline(cin, s);
        cout<<s<<endl;
    } while(s !="");

    return 0;
}