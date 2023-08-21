// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        //method 1
        // for(int i=0; i<n;i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i]==0){
        //             nums[i]=nums[j];
        //             nums[j]=0;               
        //         }   
        //     }
        // }
       

       // method 2
        int j=0;

        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        
        for(;j<n;j++){
            nums[j]=0;
        }
    }
};
