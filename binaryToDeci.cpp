// whenevr we are trying to get decimal number from binary we wil do 
// how many values we have on each place 2^power of number of each value 
// 101010    for first place 2^0 +  2nd place 2^1 +  3rd place 2^3


#include <iostream>
using namespace std;

int binToDec(int binary){
    int ans =0, pow=1;

    while (binary > 0){
        int remainder = binary % 10;
        ans += remainder * pow;
        binary /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
 int binary = 110101;

cout<< binToDec(binary)<< endl; // give us decimal num

    return 0;
}
