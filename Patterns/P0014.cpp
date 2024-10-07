/*

take number of rows as input and print the following pattern. 
rows = 7   
1234567
 234567
  34567
   4567
    567
     67
      7
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows; 
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<i; j++) {
            cout<<" ";
        }

        for(int k = 0; k<rows-i; k++) {
            cout<<k+1+i;
        }
        cout<<endl;
    }

    return 0;

}