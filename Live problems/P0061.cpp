/*
https://leetcode.com/problems/plus-one/description/
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        bool carry = false; 
        
        for(int i = 0; i<n; i++) {
            int lastDigit = digits[n-1-i];
            if(lastDigit + 1 > 9) {
                carry = true;
                digits[n-1-i] = 0;
            } else {
                digits[n-1-i] = lastDigit+1;
                carry = false;
                break;
            }
        }

        if(carry) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};