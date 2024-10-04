/*

given number of rows, print them in the following manner: 
rows: 5
54321
4321
321
21
1


*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;                                  

    for(int i = 0; i<rows; i++) {       
        for(int j = 0; j<rows-i; j++) {     
            cout<<rows-i-j;                
        }
        cout<<endl;
    }

    return 0;
}