function linearRob(nums, start, end){
let memo = new Map();

  function dp(i){
    // no house left to Robb 
    if(i > end) return 0;

    // reuse previous results 
    if(memo.has(i)){
      return memo.get(i);
    }

    // rob the present house 
    const rob = nums[i] + dp(i + 2);

    const skip = dp(i + 1);

    const result = Math.max(rob, skip);

    memo.set(i, result);
    return result;
  }

  return dp(start);
}

