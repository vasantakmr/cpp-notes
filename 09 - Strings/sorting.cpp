#include<bits/stdc++.h>

using namespace std;

int main() {
    string str = "Gur ,.\nucS1odeAs";

    sort(str.begin(), str.end());
    sort(str.begin(), str.end(), greater<char>());

    cout<<str<<endl;
    return 0;
}