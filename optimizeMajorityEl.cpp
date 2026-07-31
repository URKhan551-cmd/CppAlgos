// LEET CODE Question  MAJORITY ELEMENT 169.    2nd Optimized Approach ******
// given arr nums of size n, return the majority el.
// the majority el is element which appears more than [n/2] times. you may assume that the majority
// element always exists in the arr.


// MJ > n/2 times   frequency of an element 

// 3 WAYS TO PERFORM THIS ALGO.
// OPTIIZE                    by help of sorting
// MOORES ALGO.





#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// first we sorted the arr or vector 
int majorityElement(vector<int> nums){
    int n = nums.size();
     
    // sorted
    sort(nums.begin(), nums.end());

    int frequency = 1, ans = nums[0];   // first el of nums is our ans we will check with this
    // forEach loop on vector
     
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
           frequency++;

        }else {
            frequency = 1;
            ans=nums[i];
        }
        if(frequency > n/2){
            return ans;
        }
    }
    return ans;
}

int main(){
  vector<int> nums ={1, 2, 2, 1, 1};
    int ans  = majorityElement(nums);
    cout<< ans << endl;

    return 0;
}
