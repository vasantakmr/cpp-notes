/*

take number of rows as input and print the following pattern. 
rows = 5  
* * * * *
*       *
*       *
*       *
* * * * *


*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int rows;
    cin>>rows;                  
    for(int row = 1; row<=rows; row++) {
        if(row == 1 || row == rows) {
            for(int star = 0; star<rows; star++) {
                cout<<"* ";
            }
        } else {
            for(int star = 0; star<rows; star++) {
                if(star == 0 || star == rows-1) {
                    cout<<"* ";
                } else {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}