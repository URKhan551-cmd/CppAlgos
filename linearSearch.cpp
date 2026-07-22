#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
     for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
     }
     return -1;
};

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5}; 
    int target = 8; 
    // int size = 2;    -1 return output

    int size = 7;  // output 3 index position 

    // // int target = 80;
    // int size = sizeof(arr) / 4;
    // // for(int i=0; i<)
    // for(int i = 0; i<size; i++){
    //     if(arr[i] == target){
    //         cout<< i<< endl; // i=3
    //     }
    // }
    // cout<<endl;
    // // cout<< -1 <<endl;  when target = 80 it will return -1

    cout << linearSearch(arr, size, target)<<endl;

    return 0;
}
