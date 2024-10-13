/*

take number of rows as input and print the following pattern. 
rows = 5  
*
 *
* *
 * *
* * *
 * *
* *
 *
*

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;    
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<=i; j++) {
            if((i%2 == 0 && j%2 == 0)  || (i%2 == 1 && j%2 == 1)) {
                cout<<"* ";                     
            } else {                            
                cout<<"  " ;
            }
        }
        cout<<endl;
    }
    for(int i = 1; i<=rows-1; i++) {
        for(int j = 0; j<rows-i; j++) {
            if((i%2 == 0 && j%2 == 0)  || (i%2 == 1 && j%2 == 1)) {
                cout<<"* ";                     
            } else {                            
                cout<<"  " ;
            }
        }
        cout<<endl;
    }

    return 0;
}