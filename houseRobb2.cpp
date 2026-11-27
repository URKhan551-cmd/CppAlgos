
class Solution {
public:
    int solve(int i, int start, vector<int>& nums,
              vector<int>& dp) {

        // Base cases
        if (i < start)
            return 0;

        if (i == start)
            return nums[start];

        // Already calculated
        if (dp[i] != -1)
            return dp[i];

        // Rob current house
        int pick = nums[i] + solve(i - 2, start, nums, dp);

        // Skip current house
        int notPick = solve(i - 1, start, nums, dp);

        // Store and return maximum
        return dp[i] = max(pick, notPick);
    }

    
int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        // Exclude last house
        int case1 = solve(n - 2, 0, nums, dp1);

        // Exclude first house
        int case2 = solve(n - 1, 1, nums, dp2);

        return max(case1, case2);
    }
};







class Solution {
public:
    int solve(int start, int end, vector<int>& nums) {

        int n = nums.size();
        vector<int> dp(n, 0);

        // Base case
        dp[start] = nums[start];

        for (int i = start + 1; i <= end; i++) {

            int pick = nums[i];

            if (i - 2 >= start)
                pick += dp[i - 2];

            int notPick = dp[i - 1];

            dp[i] = max(pick, notPick);
        }

        return dp[end];
    }

    
