//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

class RemoveDupicatesFromSortedSolution {
    public int removeDuplicates(int[] nums) {
        int curr = 0;
        for(int i = 1; i < nums.length; i++){
            if(nums[curr] != nums[i]){
                curr += 1;
                nums[curr] = nums[i];
            }
        }
        return curr+1;
    }
}