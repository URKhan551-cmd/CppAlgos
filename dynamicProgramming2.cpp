int climbingStairs(int n){

  if(n == 1 || n == 2) return n;

  return climbingStairs(n-1) + climbingStairs(n-2);
}
