//input "hello world" iste "Hello World" ila ravali


#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);                                          // Hello World

    for(int i = 0; i<str.length(); i++) {                       // i=1  i<11  len = 11;
        if(i == 0 && str[i]>=65 && str[i]<=90) {
            str[i] = str[i] + 32;                               // str[0] = H
        } else if(str[i-1] == ' ' && str[i]>=65 && str[i]<=90) {
            str[i] = str[i] + 32;
        } else if(i!=0 && str[i]>=97 && str[i]<=122) {
            str[i] = str[i] - 32;
        }
    }
    cout<<str<<endl;
    return 0;
}