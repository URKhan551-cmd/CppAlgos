// LEET CODE Question  MAJORITY ELEMENT 169.    3rd Optimized Approach  MOORES Algorithm******
// given arr nums of size n, return the majority el.
// the majority el is element which appears more than [n/2] times. you may assume that the majority
// element always exists in the arr.


// MJ > n/2 times   frequency of an element 

// 3 WAYS TO PERFORM THIS ALGO.

// MOORES ALGO.        this will do 

// mores algo elaborate: if i ahve an elemnet in majority in an arr there will be traces at last and even if there is frequency
// of that element will be comes across many time that if we get second element in arr frequency -- if same ++

// at the end the majority el will be in our answer.

#include <iostream>
#include <vector>
using namespace std;

// first we sorted the arr or vector 
int majorityElement(vector<int> nums){
    int n = nums.size();
     
    
    int frequency = 0, ans = 0;   // first el of nums is our ans we will check with this
    // forEach loop on vector
     
    for(int i=0; i<n; i++){
        
        if(frequency == 0){
            ans = nums[i];
        } 
        if(ans == nums[i]){
            frequency++;
        }else{
            frequency--;
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
