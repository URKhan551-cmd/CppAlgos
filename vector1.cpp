#include <iostream>
#include <vector>  // is a tool from stl
using namespace std;

// forEach loop on vector

int main(){
//   vector<int>vec(3, 0);
// for(int i : vec){
//     cout<< i<< endl;     // 0 0 0 
// }

vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

cout<< "vector size = "<< vec.size() << endl;   // size = 5
vec.push_back('f');
cout<< "vector size = "<< vec.size() << endl;   // size = 6

vector<int> number = {1, 2, 3, 4, 5, 6};
cout<<"number size = " <<number.size() << endl;  // 6
number.push_back(8);
cout<<"number size = " << number.size() << endl;  // 7

number.pop_back(); // 8 will get remove

cout<< "first value print = "<< number.front()<<endl;    // 1
cout<< "last value print = "<< number.back()<<endl;    // 6
cout<< "index position element = "<< number.at(3)<<endl;  // 4
  for(char val : vec){   // forEach loop
    cout<< val <<endl;     // a b c d e 
  };

  for(int i : number){
    cout<< i<<endl;       // 1 2 3 4 5 6 
  };
    return 0;
}

