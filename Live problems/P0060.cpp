/*
https://leetcode.com/problems/move-zeroes/description/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0; 

        for(; j<nums.size(); j++) {
            if(nums[j] != 0) {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
                
            }
        }
    }
};