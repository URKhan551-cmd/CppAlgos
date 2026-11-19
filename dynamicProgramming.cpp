#include <iostream>
#include <vector>
using namespace std;

// fibonacci normal recursion 
int fib(n){
  if(n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}

// fibonacci DP recursion function
int fibDP(int n, vector<int> &f){
  if(n <= 1) return n;

  if(f[n] != -1){
    return f[n];   // this will check f aray has this n value or not it has then return that aray f[n] value.
  }
// if f[n] is == -1   mean not calculate yet 
  // do calculate keep the value in f[n] index .
  return f[n] = fibDP(n - 1,  f) + fibDP(n - 2, f) // 
}




// fibonaccci Tabulation itteration version 
int fibTab(int n){
vector<int> dp(n+1);   // an array called dp where n+1 indexes and 0 on each place.

  dp[0] = 0;
  dp[1] = 1;
  for(let i=2;i<=n; i++){
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  return dp[n];
}



// int main(){

//   int n = 6;
//   vector<int> f(n + 1,  -1);   // create int array with n + 1 size    and -1 on each place.  
//   cout << fibDP(n, f) << endl;

//   return 0;
// }


int main(){
  int n = 6;
  cout << fibTab(n) << endl; 
  
  return 0;
}

// fibonacci sequence

// DP is an optimization technique that solves problems with: 
// 1: overlapping subproblems.    repeated calculation
// 2: optimal substructure.
// by storing intermediate results to avoid redundant computations.


// TWO IMPORTANT APPROACHES TO SOLVE DP PROBLEMS 
MEMOIZATION  ----  recursion TOP-DOWN        recurison fn + storage
TBAULATION ----  itteration  BOTTOM_UP       loops  +  storage


// FIBONACCI TABULATION
  // step 1: we will create a data structure where w ewill kep the output of each fib call result.
  // step 2: initialize the array with base case like fib(0) = 0    and fib(1) = 1  
  // step 3: solve small --- big

  
// whatever the problem is if it can be solved by recurion that will be solved by loop also 
// if its solve by loop we can solve it by recursion also 
// so memoization can be done in the way of tabulationa and tabulation can be solved by the way of memoization


  // DP = PATTERNS
  1:  1D  DP(Fibonacci)
  2:  Knapsack (0-1, unbounded)
  3:  LCS & LIS
  4:  Catalan
  5: Grid DP
  6: Matrix Chain Multiplictaion(MCM)

others Palindrome DP,  DP on Trees, Bitmask DP,  State Machine DP(stocks).
