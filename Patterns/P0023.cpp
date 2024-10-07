/*

given number of rows and columns, print them in the following manner: 
rows: 4
columns: 5
AAAAA
BBBBB
CCCCC
DDDDD


*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    int columns;

    cin>>rows>>columns;

    char ch = 65;
    for(int i =0; i<rows; i++) {
        for(int j = 0; j<rows-i; j++) {
            char temp = (ch+j);
            cout<<temp;
        }
        cout<<endl;
    }

    return 0;
}