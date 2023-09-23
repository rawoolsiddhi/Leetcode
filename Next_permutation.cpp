// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// Constraints:
// 1 <= nums.length <= 100
// 0 <= nums[i] <= 100

// Input: nums = [1,2,3]
// Output: [1,3,2]


class Solution {
public:
    void nextPermutation(vector<int>& nums) {

    //method
         //  1- generate all possible permutation(recursion)- sorted order.
         //   2. search-inear.
         //    3. return next. 

    // method 2
         // next_permutation(nums.begin(), nums.end());

    //method 3
        int index =-1;
        int n=nums.size();

        for(int i= n - 2; i>=0;i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }

         if(index == -1){
            reverse(nums.begin() +index+1,nums.end());
           
        }
        
          else{
        for(int i =  n-1; i > index; i--){
            if(nums[index] < nums[i]){
                swap(nums[index] , nums[i]);
                break;
            }
        }

        reverse(nums.begin() + index + 1 ,nums.end());
        
    }
}
};
