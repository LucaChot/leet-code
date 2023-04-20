//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/

#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int len = prices.size() - 1;
        for(int i = 0; i < len; i++){
            if(prices[i] < prices[i+1]){
                profit += prices[i+1] - prices[i];
            }
        }
        return profit;
    }
};