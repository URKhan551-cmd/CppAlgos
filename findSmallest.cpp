#include<iostream>
using namespace std;

int main(){

    int nums[] = {5, 15, 22, 1, -15, 24};
    
    int size = 6;
    int smallest = INT_MAX; // +infinity
    int largest = INT_MIN; // -infinity

    for(int i=0; i<size;i++){
         if(smallest > nums[i]){
             smallest = nums[i];
             cout<<"ya position ha: "<< i <<endl;  // which position has low values where the loop enter into if 0, 3, 4
         }

         smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);  // -15
    }

    cout<< "smallest val: " << smallest <<endl;
    cout<< "largets val: "<< largest<<endl; // 24
    return 0;
}
