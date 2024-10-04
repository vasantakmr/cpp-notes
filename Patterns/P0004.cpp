/*

given number of rows, print them in the following manner: 
rows: 7
1
22
333
4444
55555
666666
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;                          // 4

    for(int i = 0; i<rows; i++) {       // i = 4     i<4        
        for(int j = 0; j<=i; j++) {     // j = 4    j<=3  
            cout<<i+1;                      
        }
        cout<<endl;
    }
    // 1
    // 22
    // 333
    // 4444
    // 


    return 0;
}