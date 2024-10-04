/*

given number of rows, print them in the following manner: 
rows: 7
*******
******
*****
****
***
**
*

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;

    cin>>rows;   5                   


    for(int i = 0; i<rows; i++) {    
        for(int j = 0; j<rows-i; j++) { 
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}