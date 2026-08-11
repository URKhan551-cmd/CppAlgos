// Container With Most Water:::
// height = [1, 8, 6, 2, 5, 4, 8, 3, 7]    these numer represent height of line of container can be.

// return Max AMount of water container can store.

// get the two lines from that arr or vector where i can store max amount of water in container been made by lines.

//**** container can be made by height of two lines and width between of them  horizontaly 
// how do we get width by compare the tw index position difference.

// Assume : between of lines 8 at index[1] and line 7 at index[8];  height is 7 because depends on lower (smaller) one according to overflow
//  and with become 1-8 = 7    7 is the width now 
// get the AREA = height x width    =  7 x 7 = 49  this is the container area holds water capacity

// BRUTE FORCE APPROACH::   
O(n2);
// to get all possible container and wall to connect with next wall.
// height of the containeer controlled by smaller wall or line.
height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
class Solution {
public: 
   int maxArea(vector<int>& height){
     int maxWater = 0;   // answer keep it here
     for(int i =0; i< height.size(); i++){
       for(int j=i+1; j<height.size(); j++){
        int width = j - i;
         int height = min(height[i], height[j]);  // this will decide minimum of these two walls on i and j index
         int currentWater = width * height;

         maxWater =  max(maxWater, currWater);   // this will get the maximum of these two 

       }
     }
return maxWater; // as answer      
   }
};

// O(n2)   here if we submit we will get TLE on LEET CODE
// because the contrains said n=10^5   it mean   O(n2) = 10^5x2   = 10^10
// 10^10 is greater than 10^8   which is out website submission time if greater than this value cause TLE.

// this solution cause TLE


// *******************
// here we can use O(n) or O(log n);

// so now we will solve this problem with TWO POINTER APPROACH.

// OPTIMAL APPROACH = TWO POINTER       
// where we dal with two values at a time like in REVERSE ARR and PALINDROME CHECK we need two pointer approach.
// here we will also select two Walls or lines  of the container then differentiate them. with TWO POINTER.

container = width x height;
width = right wall - left wall;     height = min(height[left wall] , height[right wall])

   right wall = height last index
   left wall = height first index

// pointer approach give insights about two points where one small height control capacity of containing water so 
// small wall should bee ++ index wise.
O(n) timeComplexity.

class Solution {
public: 
 int pointerContainer(vector<int>& height){
    int maxWater = 0;  // ans

    int leftPoint = 0, rightPoint = height.size() -1;
    
    while(leftPoint < rightPoint){
       int width = rightPoint - leftPoint;
       int height = min(height[leftPoint], height[rightPoint]);
       int currentWater = width * height;
       maxWater = max(maxWater, currentWater);

       height[leftPointer] < height[rightPointer] ? leftPointer++ : rightPointer--;  // ternary statement : say if height of leftPointer is 
    }                                                                               // small as compared to rightPointer then increment 
                                                                                    // leftPointer. else rightPointer ko decrement karo.
    return maxWater;
 }
   
}

// TC = O(n)
