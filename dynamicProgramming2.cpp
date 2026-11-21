// Recurrsion solution for the problem 
int climbingStairs(int n){

  if(n == 1 || n == 2) return n;

  return climbingStairs(n-1) + climbingStairs(n-2);
}

// memoization by DP

int memoizationClimbing(int n, vector<int> &dp){
    if(n == 1 || n == 2) return n;

  if(dp[n] != -1){
    return dp[n];
  }

  return dp[n] = memoizationClimbing(n - 1, dp) + memoizationClimbing(n - 2, dp);
}

int execute(int n){
   vector<int> dp(n + 1, -1);

  return memoizationClimbing(n, dp);
  
}


// Tabulation  from bottom -- up
int tabulation(int n){
  if(n == 1 || n == 2) return n;
  
  vector<int> dp(n+1);
  dp[1] = 1;
  dp[2] = 2;

  for(int i=3; i<= n; i++){
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}



// Tabulation space optimization where we dont need dp vector or Array.
