#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> inputArr = {2, 2, 4, 4, 6, 4, 2, 4, 6, 8, 10, 12, 14, 16};
    vector<int> frequency(20, 0);
    
    for(int i =0 ;i< inputArr.size(); i++) {
        int element = inputArr[i]/2;
        frequency[element]++;
    }

    for(int i = 0; i<frequency.size(); i++) {
        cout<<frequency[i]<<"  ";
    }

    return 0;
}