int robb(vector<int>& nums){

let n = nums.size();

  if (n == 1) return nums[0];

  vector<int> dp(n);
  dp[0] = nums[0];
  dp[1] = max(nums[0], nums[1]);

  
  
}
