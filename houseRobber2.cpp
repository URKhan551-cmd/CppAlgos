int helping (vector<int>& nums){
  int n = nums.size();

  vector<int> dp(n-1);

  dp[0] = nums[start];
  dp[1] = max(nums[start], nums[start + 1]);

  for(int i=start+2; j=2; i<end; i++; j++){
   dp[j] = max(dp[j-1], dp[j-2] + nums[i])
  }

  return dp[n-2];
}

