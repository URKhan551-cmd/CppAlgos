#include <iostream>
#include <vector>
using namespace std;


// intuition about kadans algo is that if i get a negative value in sub arr of an arr. look at the value of negative 
// if negative is big as compare to positive then dont count it just drop this  arr no need,
// start from the next element new start of an array because past arr has high-negative which is not useful in sum.

int main(){
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    // single loop   we get two variable where we can put currentSum of sub arr and maxSum that will be our output.

    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i =0; i<n; i++){
       currentSum += arr[i];
       maxSum = max(currentSum, maxSum);  // here check maxSum variable holding, and currentSum holding which one is greate. just  chosse the bigger number thats it forget the smalleer 
        if(currentSum<0){
         currentSum = 0;    // this is reinitialization
        }
    }
cout<<"maxSum is = "<< maxSum<<endl;
    return 0;
}

// int maxSubArray(vector<int>& nums){algo implementation
//     int curSum = 0, maxSum = INT_MIN;
//      for(int val: nums){ 
//           curSum += val;   
//           maxSum = max(curSum, maxSum);  
//           if(curSum < 0){
//            curSum = 0;
//        }
//    }
//    return maxSum;
//}
