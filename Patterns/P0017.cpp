/*
take number of rows as input and print the following pattern. 
rows = 7   
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************

*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;                                          // 4
    for(int i = 0; i<rows; i++) {                       // i = 1    0<4
        for(int j = 0; j<=i; j++) {                     // j = 1    1<=1
            cout<<"*";                                  // "*      *"
        }                                               // "**    **"
        for(int k = 0; k<((2*rows)-(2*(i+1))); k++) {   // k = 0    k<(4)
            cout<<" ";
        }
        for(int l = 0; l<=i; l++) {                     // l = 0    1<=1
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
