/*

take number of rows as input and print the following pattern. 
rows = 6   
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
    cin>>rows; 
    for(int rowNo=0; rowNo<rows; rowNo++) {
        for(int space = 0; space<rowNo; space++) {
            cout<<" ";
        }

        for(int star = 0; star<rows-rowNo; star++) {
            cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}