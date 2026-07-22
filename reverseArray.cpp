#include <iostream>
using namespace std;

// for even size array case we will set our condition when out start = end then stop;
// for an odd array size we will use start < end   until unless loop works. 


void swap(int arr[], int size){
    int start = 0;
    int end = size -1;

    while(start < end){       // for an odd
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}
int main(){

  // int arr[] = {4, 2, 7, 8, 1, 2, 5}; // [5, 2, 1, 8, 7, 2, 4]
//   int size = 7;

  int arr[] = {5, 4, 3, 2, 1}; // 1,2,3,4,5
  
  int size = 5;

  swap(arr, size);
  for(int i=0; i<size;i++){
    cout<<arr[i]<< " ";
  }
cout<<endl;

    return 0;
}
