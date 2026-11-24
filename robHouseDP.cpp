int robb(vector<int>& nums){

int n = nums.size();

  if (n == 1) return nums[0];

  vector<int> dp(n);
  dp[0] = nums[0];
  dp[1] = max(nums[0], nums[1]);

  for(int i = 2; i< n; i++){
    dp[i] = max(dp[i - 1], dp[i-2] + nums[i]
  }
  return dp[n-1]
}

// dp[i - 1]  give us the bvalue before from the present.


// space optimization in the same solution

int main(vector<int>& nums){

  int n = nums.size();
  if(n==1) return nums[0];

  prev1 = nums[0];
  prev2 = max(nums[1], nums[0]);
  result = prev2;
  for(int i=2; i<n; i++){
    result = max(nums[i] + prev1, prev2);
    prev1= prev2;
    prev2 = result;
  }

  return result;
}
