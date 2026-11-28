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



int prev1 = 0;
int prev2 = abs(height[1] - height[0]);

int result = prev2;

jump1 = prev2 + abs(heights);
jump2 = prev1 + abs(heights);
result = min(jump1, jump2);

prev1 = prev2;
prev2 = result;

return result;
