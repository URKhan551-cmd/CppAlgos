#include <iostream>
#include <vector>  // OR <bits/c++.h>
using namespace std;

// vectors are dynamic in nature instead array is static we have to specify the size for an array. 
// for vector no need to spcify size.
// it comes along with STL extension or library tools which has implementation inside of it.
// we dont need to look after it.
// STL have Queue, HAsh, stack, set.vector
// STL has different tools there is one called vector.

// vector<int>vec;  
// vector<int>vec={size};
// vector<int>vec(3, 0)  (3 size of vec)  (0 is index) we can use forEach loop on vector 
int main(){
  // vector<int> vec; // 0 size
  vector<int> vec = {1, 2, 3, 4};
cout<< vec[0]<<endl;  // same index wise search 1
cout<< vec[1]<<endl; // 2
cout<< vec[2]<<endl; // 3
cout<< vec[3]<<endl; // 4
    return 0;
}
// -std=c++11  11 standard of cpp we have been using must use when got error in terminal.
// g++ -std=c++11 code.cpp -o ./code.exe    in terminal 


// OPERATIONS ON VECTORS 
// SIZE                   .size();
//PUSHBACK                .push_back(val)  put some value into the last of the vector arr
// POP_BACK               .pop_back()   remove the last value.
//FRONT                   .front()      will print the fist element of an arr o vector.
// BACK                   .back()       will print the last element.
// AT                     .at(index)              accesing value at specific index


STATIC ::  compile time   // array has static size allocation 

STACK MEMORY:: array has been kept inside of STACK memory

DYNAMIC :: Run time       // vector has dynamic size on runtime Memory allocation;  // RESIZE 

HEAP MEMORY :: heap kept the DYNMIC vector inside of it 


INTERNALYY VECTOR IS AN ARRAY... nothing else but operate in differrent ways.

when we write in code like 

vector<int>vec     // this will create an empty one size Arr.
                                
vec.push_back(1);      // this will get the 1  and get into the empty space.
             { old Memory remove }

vec.push_back(2);    // now memory knows it has one size arr or vector so they resize it to double 
                    // now arr  has   1 2      new allocate old remove 
            { old Memory remove }
vec.push_back(3)    // now how this will go into arr it has two size space but dynamically alocate double size 
                    // now the vector make double becomes 4 size     1 2 3 [emptyspaace]   new alocate old remove memory

OLD ARRAY REMOVE FROM MEMORY NEW ADDED DOUBLE SIZE OF THE OLD ONE.******



VECTOR HAS TWO PROPERTIES
SIZE  &  CAPACITY

size how many element it has 
capacity  how much he can take further capable of.

i have arr size 4  its capacity is double of it 8
