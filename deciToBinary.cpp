// how do we convert decimal mean 1 - 9 to 0-1 binary
// just take an lcm of that decimal to 2
// i have 42 what will be the binary of that 
// 2|42 = 21 with 0       now get all the 01 from backward direction   (101010)binary of 42
// 2|21 = 10 with 1
// 2|10 = 5  with 0
// 2|5  = 2 with 1
// 2|2  = 0 with 0
// 2|1 =  1 with 1
// 0

// 2|50 = 25 with 0     get values frm backward   (110010) binary of 50 
// 2|25 = 12 with 1
// 2|12 = 6 with 0
// 2|6 =  3 with 0
// 2|3  = 1 with 1
//2|1  = 1  with 1
// 0

#include <iostream>
using namespace std;

int binaryFind(int decimal){
    int ans = 0, pow = 1;
    while(decimal > 0){
        int remainder = decimal % 2;
        decimal = decimal / 2;
        ans += (remainder * pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    // int decimal = 50; 110010
    // int decimal = 10;  1010
    int decimal = 10;  
for(int i = 1; i<=decimal; i++){
  cout<< binaryFind(i) << endl;   10

}
//    cout<< binaryFind(decimal) << endl;


    return 0;
}
// inside of loop
// 11
// 100
// 101
// 110
// 111
// 1000
// 1001
// 1010
