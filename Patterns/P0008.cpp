/*

given number of rows, print them in the following manner: 
rows: 5
1
21
321
4321
54321


*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;                         // 4        

    for(int i = 0; i<rows; i++) {      // i = 2    i<4
        for(int j = 0; j<=i; j++) {    // j = 2    j<=2
            cout<<i-j+1;               // 321
        }
        cout<<endl;
    }

    return 0;
}