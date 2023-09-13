/*Given an integer array nums, find the 
subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:
 
Constraints:
1 <= nums.length <= 105
-104 <= nums[i] <= 104*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        
        int n=nums.size();
       
// method 2
// int maxi=INT_MIN;
//   for(int i=0; i<n; i++){
//       int sum=0;
//       for(int j=i; j<n;j++){ 
//           sum=sum+nums[j];
//           maxi =max(maxi, sum);
//       }
//   } 

      

// Kadane's Algorithm --o(n)
    int sum=0;
    int maxi=nums[0];
    for(int i=0; i<n;i++){
        sum=sum+nums[i];

        maxi =max(maxi , sum);

        if(sum<0){
            sum=0;
        }
    }
      return maxi;
    }
};
