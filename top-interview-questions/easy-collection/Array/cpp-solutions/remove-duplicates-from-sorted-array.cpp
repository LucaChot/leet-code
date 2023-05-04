//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums.at(curr) != nums.at(i)){
                curr += 1;
                nums.at(curr) = nums.at(i);
            }
        }
        return curr+1;
    }
};