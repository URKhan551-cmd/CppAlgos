#include <iostream>
#include <vector>
using namespace std;

// [2, 7, 11, 15]    get the pair which will get us target value
// here target value will be given. like 9 or 13, or 18, or 26
// target can be amy number we have to compute two element to reach to that target.


// here is the function which takes an arr or vector andn target value

vector<int> pairSum(vector<int> nums, int target){
  vector<int> ans;
  int n = nums.size();
       for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
               ans.push_back(i);
               ans.push_back(j);
               return ans;
            }
        }

       }
       return ans;
}

int main(){
  vector<int> nums = {2, 7, 11, 15};
  int target = 13;
  
  vector<int> ans = pairSum(nums, target);
  cout<< ans[0] << ", " <<ans[1] << endl;

  return 0;
}
