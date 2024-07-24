// Date: Sun May 26 2024 21:02:37 GMT+0900 (Korean Standard Time)
namespace ran = std::ranges;

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() <= 2) return ran::max(nums); // return *max_element(nums.begin(), nums.end());

        int dp[404]; // int dp[404] = {nums[0], nums[0] > nums[1] ? nums[0] : nums[1], };
        ran::fill(dp, 0); // 전역변수가 아니기 때문에 안전하게 초기화 // fill(dp, dp+404, 0);
        dp[0] = nums[0], dp[1] = (nums[0] > nums[1] ? nums[0] : nums[1]); // dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < nums.size(); i++) {
            dp[i] = max((nums[i] + dp[i-2]), dp[i-1]);
        }

        return dp[nums.size()-1];
    }
};
