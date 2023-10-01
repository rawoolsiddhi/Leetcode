// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
// Example 1:
// Input: x = 2.00000, n = 10
// Output: 1024.00000

// Constraints:
// -100.0 < x < 100.0
// -231 <= n <= 231-1
// n is an integer.
// Either x is not zero or n > 0.
// -104 <= xn <= 104

class Solution {
public:
    double myPow(double x, int n) {

//method 1
        // if(n==0){
        //     return 1;
        // }
        // else if(n < 0){
        //  n=abs(n);
        //   x=1/x;
        // } 
        // return x * myPow(x,n-1);

//method 2

//  return pow(x, n);


//method 4
long nn;
 //int   (-2^31) to (2^31 -1 ) ,  if (n == INT_MIN)   n = -(n + 1); 
nn= n;
 if(nn==0){
     return 1.0;
 }
 
 if(nn<0){
     
     x=1.0/x;
     nn=abs(nn);
 }
 if(nn%2 == 0){
    double partial1 = myPow(x, nn/2);
    return partial1 * partial1 ;
 }
 else{
     
     double partial1 = myPow(x,(nn-1)/2);
     return partial1 * partial1 * x;
 }

       return -1;
    }
};

// without recursion
//  while (n > 0) {
//             if (n % 2 == 1) {
//                 result *= x;
//             }
//             x *= x;
//             n /= 2;
//         }
