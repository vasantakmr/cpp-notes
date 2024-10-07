/*

take number of rows as input and print the following pattern. 
rows = 5  
    *
   * *
  *   *
 *     *
* * * * *


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
            if(star == 0 || star == row) {
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    for(int lastRowStar = 0; lastRowStar<rows; lastRowStar++) {
        cout<<"* ";
    }


    return 0;
}