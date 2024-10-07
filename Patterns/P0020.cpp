/*

take number of rows as input and print the following pattern. 
rows = 5  
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/


#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;    
    for(int row = 0; row<rows-1; row++) {
        for(int space = 0; space<rows-row-1; space++) {
            cout<<" ";
        }

        for(int star = 0; star<=row; star++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int row = 0; row<rows; row++) {
        for(int space = 0; space<row; space++) {
            cout<<" ";
        }

        for(int star = 0; star<rows-row; star++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}