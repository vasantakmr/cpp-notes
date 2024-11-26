/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = INT_MAX;
        int max_profit = 0;

        for(int i =0; i<prices.size(); i++) {
                min_value = min(min_value, prices[i]);
                max_profit = max(max_profit, prices[i]-min_value);
        }

        return max_profit;
    }
};