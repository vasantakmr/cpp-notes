/*
https://leetcode.com/problems/single-number/description/
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i =0; i<nums.size(); i++) {
            bool found = true;
            for(int j =0; j<nums.size(); j++) {
                if(i!=j && nums[i] == nums[j]) {
                    found = false;
                }
            }
            if(found) {
                return nums[i];
            }
        }
        return result;
    }
};