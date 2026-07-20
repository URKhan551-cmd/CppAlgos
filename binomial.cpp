#include <iostream>
using namespace std;


// here wewill find out the nCr binomial coefficient for n and r
// if i do have n=8 and r= 2   8C2 = ??
// first we will find factorial of n 


int factorial(int n){
 int fact = 1;
 for(int i=1; i<=n; i++){
    fact *= i;
 }
 return fact;
    
};

int nCr(int n, int r){
    int factN = factorial(n);
    int factR = factorial(r);
    int factNmR = factorial(n-r);

    return factN / (factR * factNmR);
}

int main(){
    
    int n = 8; int r=2;
    int find = nCr(n, r);
    cout<< find <<endl;

    return 0;
}
