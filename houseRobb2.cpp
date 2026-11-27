
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

    
