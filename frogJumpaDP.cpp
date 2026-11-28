int jump( vector<int>& height){

int n = height.size();
  if(n == 1) return 0;
  vector<int>& dp();

  dp[0] = 0;
  dp[1] = abs(height[1] - height[0]);

  for(int i=2; i<n; i++){
    int jump1 = dp[i] + abs(height[i] - height[i - q])
  int jump2 = dp[i-2] + abs(height[i] - height[i - 2])

    dp[i] = min(jump1, jump2);
  }

    return dp[n - 1];
}

int main(){
 vector<int> height = (30, 20, 40, 50);
  cout<< jump(height) << endl;
  
  return 0;
}
