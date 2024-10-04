/*

given number of rows, print them in the following manner: 
rows: 5
12345
2345
345
45
5

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;                                  
    for(int i = 0; i<rows; i++) {       
        for(int j = 0; j<rows-i; j++) {     
            cout<<j+1+i;                
        }
        cout<<endl;
    }

    return 0;
}