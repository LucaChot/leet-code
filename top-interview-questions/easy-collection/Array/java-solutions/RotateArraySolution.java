//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

class RotateArraySolution {
    public void rotate(int[] nums, int k) {
        k=k%nums.length;
        int[] nums2 = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            nums2[(i+k) % nums.length] = nums[i];
        }
        for(int i = 0; i < nums.length; i++){
            nums[i] = nums2[i];
        }
    }

}