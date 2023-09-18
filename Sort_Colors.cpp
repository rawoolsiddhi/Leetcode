// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// Example 1:
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

//n == nums.length
// 1 <= n <= 300
// nums[i] is either 0, 1, or 2.

class Solution {
public:
    void sortColors(vector<int>& nums) {
       
       int n=nums.size();
       // method 1
    //    int a = 0;
    //    int b = 0;
    //    int c = 0;
      
    
    //   for(auto num : nums){
    //        if(num == 0){ 
    //            a++;
    //        }
    //        else if(num == 1){
    //            b++;
    //        }
    //        else if(num == 2){
    //            c++;
    //        }
    //    }

    //    for(int i = 0; i < a; i++) nums[i] = 0;
    //    for(int i = a; i < a + b; i++) nums[i] = 1;
    //    for(int i = a + b; i < a + b + c; i++) nums[i] = 2;


    // dutch National flag algorithm.

    int low=0,  high=n-1 , mid=0,temp=0;
    
    while(mid<=high){
        if(nums[mid]==0) {
            temp=nums[mid];                     // swap(nums[low], nums[mid]);
            nums[mid]=nums[low];
            nums[low]=temp;
            low++;
            mid++;
        }
        else if(nums[mid]==2){
            temp=nums[mid];                 //  swap(nums[mid], nums[high]);
            nums[mid]=nums[high];
            nums[high]=temp;
            high--;
        }
        else{
            mid++;
        }
    }
    }
};
