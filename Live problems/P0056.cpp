/*
https://leetcode.com/problems/sort-colors/
*/

#include <vector>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, ones = 0, twos = 0;

        for(int i =0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                zero++;
            } else if(nums[i] == 1) {
                ones++;
            } else if(nums[i] == 2) {
                twos++;
            }
        }

        int j = 0; 
        for(int i =0; i<zero; i++) {
            nums[j] = 0;
            j++;
        }

        for(int i =0; i<ones; i++) {
            nums[j] = 1;
            j++;
        }
        for(int i =0; i<twos; i++) {
            nums[j] = 2;
            j++;
        }
    }
};