#include<iostream>

using namespace std;

int main() {
    int a = 20;

    string str2 = "";
    str2 = str2 + a;
    string str = to_string(a);
    str2 = str2 + str;
    cout<<str<<endl;
    return 0;
}