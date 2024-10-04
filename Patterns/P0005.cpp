/*

given number of rows, print them in the following manner: 
rows: 7
7777777
666666
55555
4444
333
22
1

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;                                 

    for(int i = 0; i<rows; i++) {           
        for(int j = 0; j<rows-i; j++) {     
            cout<<rows-i;                          
        }
        cout<<endl;
    }


    return 0;
}