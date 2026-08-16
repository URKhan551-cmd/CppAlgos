// Famous leetCode problem.
// PRODUCT OF AN ARRAY EXCEPT SELF.
// given an integer arr nums return an arr answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// the product of any prefix or suffix of nums is guaranteed to fit in 32-bit integer.
// ** you must write an algorithm that runs O(n) time and without using the division operation.

// in simple words we need to itterate over the arr element and multiply all of them except the index where we are present.
// if we are at 0 index. we dont need to include that position element into multiplication of whole arr element.


// first and Easy approach to solve this problem is  take the wole array product like [1, 2, 3, 4] = 1 x 2 x 3 x 4 = 24.
//  now divide each value by 24.   24/1 = 24 ,  24/2 = 12,  24/3 =8,   24/4= 6    NEW ANSWER ARR = [24, 12, 8, 6]  

// THIS APPROACH WE CANNOT USE BECAUSE WE CANNOT DIVIDE ITS NOT ALLOWEED.

// BRUTE FORCE   O(n2)    not gonna Accepted
nums = [1,2,3,4]
vector<int>productExceptSelf(vector<int>& nums){
  
int n = nums.size();
vector<int> ans(n, 1);
  
for(int i=0; i<n; i++){
   int product = 1;     // if we remove this also correct
  for(int j=0; j<n; j++){
    if(i != j){
      product *= nums[j];    // here we will ans[i] *= nums[j];
    }
    
  }
  ans[i] = product;
}
  return ans;
};


vector<int> ans(nums.size(), 0);
int temp = 0;
for(int i =0; i<nums.size();i++){
  if(i != temp){
    ans[i] *= nums[i];
  };
  temp++;
}
