//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, 
// starting from 0 and 1. That is,
// Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.


class Solution {
public:
    int fib(int n) {
       
 // method 1
       
        // if(n<=1) return n;
        // return fib(n-1)+fib(n-2);

//method 2
        int dp[n+1];
        if(n<=1) return n;
        
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
