#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> vec;
    cout<<"check the size when empty = "<< vec.size()<< endl;
vec.push_back(1);
cout<<"after 1 added to last = "<< vec.size()<<endl;   // 1
cout<<"after 2 added to last = "<< vec.capacity()<<endl; // 1


vec.push_back(2);
cout<<"after 2 added to last = "<< vec.size()<<endl;    // 2
cout<<"after 2 added to last = "<< vec.capacity()<<endl;  // 2


vec.push_back(3);
cout<<"after 3 added to last = "<< vec.size()<<endl;  // 3
cout<<"after 2 added to last = "<< vec.capacity()<<endl;  // 4



return 0;
}
