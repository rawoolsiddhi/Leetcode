/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores)

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
//method 1
    //  set<int> s;
    //  for(auto i:nums) s.insert(i);
    //  int a=0;
    //  for(auto i:s) nums[a]= i, a++;

    //  return s.size();


//method 2

       int j=0;

       if(nums.size()==0){
           return 0;
       }
       
       for(int i=1; i<nums.size(); i++){
           if(nums[i]!=nums[j]){
               j++;
               nums[j]=nums[i];
           }
       }
       return j+1 ;
    }
};
