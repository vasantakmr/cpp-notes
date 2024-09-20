/*
https://snakify.org/en/lessons/while_loop/problems/seq_max_chunk_of_repetitions/
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int maxCount = 1;
    int count = 1;

    int prevNum;
    cin>>prevNum; 

    while(prevNum>0) {
        int currNum;
        cin>>currNum;
        if(prevNum == currNum) {
            count++;
        } else {
            if(maxCount<count) {
                maxCount = count;
            }
            count = 1;
        }
        if(currNum == 0) {
            break;
        }
        prevNum = currNum;
    }
    cout<<maxCount<<endl;
    return 0;
}