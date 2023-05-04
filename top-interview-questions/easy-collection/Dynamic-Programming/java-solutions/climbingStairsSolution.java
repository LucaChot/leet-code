//https://leetcode.com/explore/interview/card/top-interview-questions-easy/97/dynamic-programming/569/

public class climbingStairsSolution {
    public int climbStairs(int n) {
        int[] cost = new int[n+1];
        cost[0] = 1;
        cost[1] = 1;
        for(int i = 2; i <= n; i++){
            cost[i] = cost[i-1] + cost[i-2];
        }
        return cost[n];
    }

}

