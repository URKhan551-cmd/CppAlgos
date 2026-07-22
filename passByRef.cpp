#include<iostream>
using namespace std;
// pass by refrence it cause change in original array.
void change(int arr[], int size){
    cout<<"infuction\n";
        for(int i=0; i<size;i++){
            arr[i] = 2* arr[i];
        }
    }
int main(){

    int nums[] = {5, 15, 22, 1, -15, 24};
    change(nums, 3);
    cout<< "inMain\n";
    
    for(int i=0; i<3; i++){
        cout<< nums[i]<<endl;
    }
    cout<< nums[0]<<endl;
    return 0;
}
