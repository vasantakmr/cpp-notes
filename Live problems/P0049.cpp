/*
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j =0; 
        string s1 = haystack, s2 = needle;
        for(int i = 0; i<s1.length(); i++) {
            
            for(j = 0; j<s2.length();) {
                if(s1[i+j] == s2[j]) {
                    j++;
                } else {
                    break;
                }
            }

            if(j == s2.length()) {
                return i;
            }
        }

        return -1;
    }
};