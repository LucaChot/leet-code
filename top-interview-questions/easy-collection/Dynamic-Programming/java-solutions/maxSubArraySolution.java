//https://leetcode.com/explore/interview/card/top-interview-questions-easy/97/dynamic-programming/566/

public class maxSubArraySolution {
    public int maxSubArray(int[] nums) {
        int[] left = new int[nums.length+1];
        int[] right = new int[nums.length+1];
        
        left[0] = 0;
        for(int i = 1; i < left.length; i++){
            left[i] = left[i-1] + nums[i-1];
        }

        right[nums.length] = 0;
        for(int i = nums.length-2; i >= 0; i--){
            right[i] = right[i+1] + nums[i+1];
        }
        int leftmax = 0;
        int rightmax = 0;
        for(int i = 1; i < left.length; i++){
            if(left[i] > left[leftmax]){
                leftmax = i;
            }
            if(right[i] > right[rightmax]){
                rightmax = i;
            }
        }
        System.out.println(leftmax);
        System.out.println(rightmax);
        int total = 0;
        for(int i = rightmax; i < leftmax; i++){
            total += nums[i];
        }
        return total;
    }
}
