#include <iostream>
#include <vector>
using namespace std;

// return pair in sorted arrr mean maybe that arr is sorted ascending 1---
// maybe descending sorted arr like 10 --- 1; opposite or reverse order 
// sorted mean all the lower value will come first 
// and all bigger value will come at end .

// here we will use two POINTER Approach 
// one from start and one at end.
//  ****
// if both element(first , last ) has  result  > target  ==>> then we should take less value froom the End because here End is too big.

// ***
// if (first , last ) element   result < Target   we will go to the second el from Start  i+1, because we need some biger value.

//******** 
// if (both element) give us the result == target return  index position of these.

// here is the function 
vector<int> sumOfSort(vector<int> nums, int target){
   int n = nums.size();
   vector<int> ans;
   int i =0, j=n-1;
   while(i < j){
    int pairSum = nums[i] + nums[j];
    if(pairSum > target){
        j--;
    }else if(pairSum < target){
        i++;
    }else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
   }
   return ans;
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
   int target = 26;
    vector<int> ans = sumOfSort(nums, target);
    cout<< ans[0] << ", " << ans[1] << endl;
return 0;
}
