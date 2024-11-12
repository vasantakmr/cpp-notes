/*
https://leetcode.com/problems/string-to-integer-atoi/
*/

class Solution {
public:
    int myAtoi(string s) {
        int neg = 1;
        int i =0;
        while(s[i] == ' ') {
            i++;
        }
        if(s[i] == '-') {
            neg = -1;
            i++;
        } else if(s[i] == '+') {
            i++;
        }
        long long num = 0;
        for(; i<s.length(); i++) {
            if(s[i]>=48 && s[i]<=57) {
                num = num *10 + (s[i]-48);
                if( neg * num >= pow(2, 31)) {
                    num = pow(2, 31)-1;
                }
                if(neg * num < -1*pow(2, 31)) {
                    num = pow(2, 31);
                }
            } else {
                return neg * num;
                
            }
        }

        if( neg * num >= pow(2, 31)) {
            num = pow(2, 31)-1;
        }

        if(neg * num < -1*pow(2, 31)) {
            num = pow(2, 31);
        }
        return neg * num;
    }
};