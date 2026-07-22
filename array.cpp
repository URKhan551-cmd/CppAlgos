#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int marks[5] = {1, 2, 3, 4, 5}; // speific size
    double price[] = {33.44, 66.68, 88.20}; // non specified size

    // cout<<marks[0]<<endl;//1
    // cout<<marks[1]<<endl;//2
    // cout<<marks[2]<<endl;//3
    // cout<<marks[3]<<endl;//4
    // cout<<marks[4]<<endl;//5

    //loop
    int size = sizeof(marks); // 20 here mean byte 20   4byte each x 5spaces.
    int spaces = size / 4;   // byte how many its spaces

    cout<<size<<endl;
    cout<< spaces<<endl; //5 
    // now we can loop over because we found spacs
    for(int i =0; i<spaces; i++){
        cout<< marks[i]<<endl;
    }

    return 0;
}
