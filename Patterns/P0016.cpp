/*

take number of rows as input and print the following pattern. 
rows = 7   
7654321
 654321
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
        for(int j = 0; j<i; j++) {
            cout<<" ";
        }

        for(int k = 0; k<rows-i; k++) {
            cout<<rows-k-i;
        }
        cout<<endl;
    }

    return 0;

}