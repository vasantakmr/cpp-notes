/*
https://leetcode.com/problems/find-the-winner-of-the-circular-game/
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    // print arr = {3, 5, 5, 5, 5}

    int removedElement = (k - 1) % n; // 1
    int elementsRemoved = 0;
    while ((n - elementsRemoved) > 1)
    { // 3 > 1
        for (int i = removedElement; i < n - 1; i++)
        { // 3
            arr[i] = arr[i + 1];
        }
        elementsRemoved++; // 3
        removedElement = (removedElement + k - 1) % (n - elementsRemoved);
    }

    cout << arr[0] << endl;

    return 0;
}


/*
Leetcode sol using vector


class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> arr;
        int i = 0;
        for(int i = 1; i<=n; i++) {
            arr.push_back(i);
        }
        
        //print arr = {1, 2, 3, 4, 5, 6, .... n}

        int removedElement = (k-1) % arr.size();
        
        while(arr.size() > 1) {
            arr.erase(arr.begin()+removedElement);
            removedElement = (removedElement + k - 1) % arr.size();
        }

        return arr[0];
    }
};


*/