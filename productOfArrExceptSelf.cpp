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



// Optimal approach O(n)
// we dont wanna count the present index position element
// but if we look at the PREFIX (the element which comes before the index).
// and SUFFIX (the Elements comes after the present index);
// we will get PREFIX  indexx  SUFFIX.
// multiply PREFIX and SUFFIX.

vector<int> productExceptSelf(vector<int>& nums){
  int n = nums.size();
  vector<int> ans(n, 1);
  vector<int> prefix(n, 1); // initialized by 1
  vector<int> suffix(n, 1);
  
// to calculate preficx product we need each element before from index to multiply.
// prefix   O(n)
for(int i=1; i<n; i++){
   prefix[i] = prefix[i-1] * nums[i-1];  // here prefix[1-1]= 0  & nums[2-1] = 1; on the prefix[0, 1,]  
}            //  i=2   prefix[2-1]=1 & nums[3-1]=2  2*1= 2   prefix[0,1,2];
             // i=3    prefix[3-1]=2  & nums[4 -1]=3  2*3 = 6   prefix[0,1,2,6];


// Suffix  O(n)
for(int i=n-2; i>=0; i--){  // reverse loop  oon sufix from backward direction   in suffix last index initialize by 1 
   suffix[i] = suffix[i+1] * nums[i+1]; // if i=2  suffix[2] = suffix[2+1]=suffix[3] * nums[2+1]=nums[3];
                
  // here it mean last element of suffix and last elemnet of nums =4; multiply them. suffix[., 12, 4, 1];

}

// ans loop   O(n)
  for(int i=0; i<n; i++){
    ans[i] = prefix[i] * suffix[i];
    
  }

  return ans;
};

// O(n)   overall TimeComplexity of this approach but here the  spaceCOmplexity is O(n) => we need O(1) spaceComplexity.


// Optimized APPROACH ACCORDING TO SPACE COMPLEXITY

vector<intr> ans(n, 1); // ans is initialized with 1 at index 0

for(int i=1; i<n; i++){
  ans[i] = ans[i-1] * nums[i-1];   // ans[i-1] is 1  & nums[i-1] =1 at index =0;   
}                                 // ans[2-1] is 1  & nums[2-1] = 2  2*1 = 2     2ndloop
                                // ans[3-1] is 2  & nums[3-1] =3    3*2 = 6;   3rdloop

int suffix = 1;
for(int i=n-2; i>=0; i--){
  sufix *= nums[i+1];
  ans[i] *= suffix;
};

return ans;


// WE REMOVED TWO VECTORS ARR SO SPACE IS OPTIMIZED.

O(1)SC   O(n)TC




