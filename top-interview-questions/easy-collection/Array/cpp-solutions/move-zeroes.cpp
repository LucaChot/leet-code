//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/

#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len =  nums.size();
        int firstzero = len;
        int pointer = 0;
        while(pointer < len){
            if(nums[pointer] == 0){
                if(pointer < firstzero) firstzero = pointer;
            }else{
                if(firstzero < pointer){
                    nums[firstzero] = nums[pointer];
                    nums[pointer] = 0;
                    firstzero += 1;
                }
            }
            pointer += 1;
        }
    }
};