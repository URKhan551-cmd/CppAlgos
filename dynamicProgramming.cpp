#include <iostream>
#include <vector>
using namespace std;

int fib(n){
  if(n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}

// fibonacci DP function
int fibDP(int n, vector<int> &f){
  if(n <= 1) return n;

  if(f[n] != -1){
    return f[n];   // this will check f aray has this n value or not it has then return that aray f[n] value.
  }
// if f[n] is == -1   mean not calculate yet 
  // do calculate keep the value in f[n] index .
  return f[n] = fibDP(n - 1,  f) + fibDP(n - 2, f) // 
}

int main(){

  int n = 6;
  vector<int> f(n + 1,  -1);   // create int array with n + 1 size    and -1 on each place.  
  cout << fibDP(n, f) << endl;

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

  

