/*

given number of rows, print them in the following manner: 
rows: 7
1234567
123456
12345
1234
123
12
1






*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;                                 

    for(int i = 0; i<rows; i++) {           
        for(int j = 0; j<rows-i; j++) {      
            cout<<j+1;                      
        }
        cout<<endl;
    }

    return 0;
}