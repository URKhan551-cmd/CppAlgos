// 136 single number on Leet code.
// vectors is a container which is always pass by value 
// but if we want to make it pass by Refrence we can use & in front of vec
//  n ^ 0 = n
//  n ^ n = 0
//  0 ^ 0 = 0

#include<iostream>
#include<vector>
using namespace std;

int main(vector<int>& nums){
     int ans = 0;
     for(int val : nums){
        // ans = ans ^ val;
        ans ^= val
     }

    return ans;
}
