/*
https://snakify.org/en/lessons/strings_str/problems/replace_substring/

*/


#include<iostream>

using namespace std;

int main() {
    string str = "Gu1ru1co1des";
    for(int i = 0; i<str.length(); i++) {
        if(str[i] =='1') {
            str.erase(i, 1);
            str.insert(i, "one");
            i = i+2;
        }
    }

    cout<<str<<endl;
    return 0;
}