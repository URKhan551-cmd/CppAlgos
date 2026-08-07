// LEET CODE EXAMPLE 

// COMPUTE  X^n      this is the problem ?

// CONTRAINS   2^-31  <= n >= 2^31    from -31 power to +31  it mean 
// we can do 1s = 10^8 OPERATION PER SECOND BUT HERE   10^31 >> greater than 10^8.  we cannot use O(n).

// we will use something else like O(log n)     here we will use  log2 n on that given n = number

// example n^5  =  nxnxnxnxn = 5x5x5x5x5 it will goes to O(n)  Complexity.  DROP THIS 
// now we can get this by help of 

// * * BINARY EXPONENTATION ::  which mean  we have to get the X into Binary digits.  
// like x=8  its binary digit will be ( log2^n + 1 ) =>  log 2^x   =>    log2^8  =>  8/2 = 4/2 = 2/2  = total 3 and + 1 => 4
//   8 = 1000 binary look there is 4 digit

// ***  another example 
// x^5  = log 2^n + 1  =>>  log2^x + 1  ==>> log2^5 + 1 ==>>  5/2  ==>> 2.5/2 ==>> total 2 + 1 ===>> 3    here i got 3 digit of 5 binary

// 5 = 101 look 3 digit..


// {{{{  log2 n + 1  }}}  give us digit in binary to any number

// *****  now we will dive into the 
//    first we will convert our power value into binary 
//   then we will loop over the binary digits 

// i got 5 = 101   it mean 3 times loop will run 
// i got 8 = 1000  it mean 4 times loop will run.    it will give us O(logn)  complexity doneeeee.

// if i got a question    X^n =  3^5    here x=3   n=5 (( n=power ));

// 5=101       x^1   and x^2 and  x^4  and  x^8  and x^16 and so on........

// how many digit that time you have to take exponent on x.

// now 5=101    here 1   associate x^1  0 associate x^2   again 1 associate x^4

// we can count where binary = 1 if binary = 0 not to count in loop 

// we will just multply powers with 1 binary digit ignore zeroooo 0.

// here in our case 
5= 101     x^1     x^2    x^4  
            1       0      1

// we will multiply  just x^1 *  x^4  = x4+1 = x^5  same as we do in normal exponentiation  but in binary. digit

// multiply digit and ADD exponents that is the maths rule.  DONT GET CONFUSED *******

// X = 3^1 * 3^1 ==>>>  X^2
// X^2 = 3^2 * 3^2 ==>>>  X^4
// X^4 = 3^4 * 3^4 ==>>>  
//  X^8    JUST 4 LOOP OPERATIONS WE PERFORMED ..

// PSUEDO CODE :: 
//     var binaryform = n,  ans=1,   x;     >>>>      here x can be  3^1 & 3^2 & 3^4 & 3^8  we will increment each loop .

//   binaryform = 101 for 5   >>>>  we will get last 1 from its binary into ans

// ans = ans * [x] = 3^1;

//   x = x*x        >>>>   this will become   3x3=9

// 2nd TURN 
//   x = x^2   on place of 0 binary  we dont need to update ans  but we need to update x

// x= x^2 * x^2   = 9 * 9 = 81    

// 3RD TURN 
// ON 1 binary again   
//  update ans = ans * x;

// x = x^4 * x^4 = 81 x 81 = 243         >>>>   3^5 = 243   we got the answer.

// we loop on binary not on 5 power.


// while(binaryform > 0){     >>> this is for 101  when we got 1 in loop then check the 
  
//      if(binaryform % 2 == 1){       check wheter the last digit is 0 or not  if not zero 0 then do something. else skip
//        ans *= x;
//      };
//  x *= x       >>>  here we get the square of x;  like we did before.

// }

O(log n) TC
class solution {
public: 
   double myPov(double x, int n){          

     // CORNER CASES    X^n   here n=0  = return  1
             if (x == 0) return  0.0;        // when x=0   everything will multiply or power = 0
            if(n == 0) return 1.0;           // when power =0 the x will be 1
            if(x == 1) return 1.0;           // 1 has power compute = 1 finalyy ;
            if(x == -1 && n % 2 == 0) return 1.0;   // if x = -1 then check its power is even = 1
           if(x == -1 && n % 2 == 1) return -1.0;  // x = -1  then check its power is odd = -1
             

     
// if value of n= negative number then what we will do .
     // x^-n   3^-5 
     // we should convert this back into positive  (1/x)^5   and convert binaryForm chnage its sign
     
if(n < 0){
  x = 1/x;
  binaryForm = -binaryForm; 
}

     
     // if the n holds positive value then this will run 
    long binaryForm = n;
    double ans = 1;

     while(binaryForm > 0){
       if(binaryForm % 2 == 1){
         ans *= x;
       }
       x *= x;
       binaryForm /= 2;
       
     }
     return ans;
   }

}


