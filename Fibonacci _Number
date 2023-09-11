/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

 Constraints:
-231 <= x <= 231 - 1*/

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
