/*

given number of rows, print them in the following manner: 
rows: 7
1
12
123
1234
12345
123456
1234567

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;                              // 3     

    for(int i = 0; i<rows; i++) {           // i = 2
        for(int j = 0; j<=i; j++) {         // j = 0      j<=2 
            cout<<j+1;                      // 12
        }
        cout<<endl;
    }

    return 0;
}