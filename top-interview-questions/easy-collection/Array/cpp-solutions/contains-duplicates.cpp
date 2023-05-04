//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for(int i = 0; i < len-1; i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};