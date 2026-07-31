// LEET CODE Question  MAJORITY ELEMENT 169.
// given arr nums of size n, return the majority el.
// the majority el is element which appears more than [n/2] times. you may assume that the majority
// element always exists in the arr.


// MJ > n/2 times   frequency of an element 

// 3 WAYS TO PERFORM THIS ALGO.
// Brute FORCE                     here we will go with brute force approach.
// OPTIIZE
// MOORES ALGO.





#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums){
    int n = nums.size();
    // forEach loop on vector
    for( int val : nums ){   // take first el of nums 
      int frequency = 0;
      for(int el: nums){    // take each element compare with val of first loop  if match frequency++
          if(el == val){
            frequency++;
          }
      }
      if(frequency > n/2){
        return val;
      }
    }
    return -1;
}

int main(){
  vector<int> nums ={1, 2, 2, 1, 1};
    int ans  = majorityElement(nums);
    cout<< ans << endl;

    return 0;
}
