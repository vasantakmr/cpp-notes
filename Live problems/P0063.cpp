/*
https://leetcode.com/problems/rotate-array/
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr = nums;
        int n = arr.size();
        vector<int> newArr(n, 0);
        k = k%n;
        int j = 0;
        for(int i = n-k; i<n; i++) {
            newArr[j] = arr[i];
            j++;
        }
        
        for(int i = 0; i<n-k; i++) {
            newArr[j] = arr[i];
            j++;
        }
        
        for(int i = 0; i<n; i++) {
            nums[i] = newArr[i];
        }
    }
};



class Solution {
  public:


    void rotateArr(vector<int>& arr, int d) {
        // code here
        d = d%arr.size();
        int n = arr.size();
        long long maxx =  INT_MIN;
        for(int i = 0; i<n; i++) {
            maxx = max(maxx, arr[i]);
        }
        
        for(int i =0; i<n; i++) {
            arr[i] = arr[i] + ((arr[(i+d)%n]%(maxx+1)) * (maxx+1));
        }

        for(int i = 0; i<n; i++) {
            arr[i] = arr[i]/(maxx+1);
            
        }
        
    }
};


