//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/549/

#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c = 0;
        int len = nums.size();
        for(int i = 0; i < len; i++){
            c ^= nums[i];
        }
        return c;
    }
};