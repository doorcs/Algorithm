class Solution {
public:
    // int dp[46] = {1, 2, };
    // int climbStairs(int n) {
    //     for (int i = 2; i < n; i++) {
    //         dp[i] = dp[i-1] + dp[i-2];
    //     }
    //     return dp[n-1];
    // }
    int dp[46] = {0, 1, 2, };
    int climbStairs(int n) {
        if (dp[n]) return dp[n];
        else {
            dp[n] = climbStairs(n-1) + climbStairs(n-2);
            return climbStairs(n-1) + climbStairs(n-2);
        }
    }
};