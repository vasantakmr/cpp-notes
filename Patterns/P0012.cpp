/*

take number of rows as input and print the following pattern. 
rows = 6    
     *
    **
   ***
  ****
 *****
******

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin>>rows;          // 6

    for(int rowNo=0; rowNo<rows; rowNo++) {                     
        for(int spaceNo=0; spaceNo<rows-rowNo-1; spaceNo++) {   
            cout<<" ";                                          
        }

        for(int starNo=0; starNo<=rowNo; starNo++) {            
            cout<<"*";                                          
        }
        cout<<endl;
    }


    return 0;
}

