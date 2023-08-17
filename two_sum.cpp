class Solution {
public:
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// brute

    // vector<int> twoSum(vector<int>& nums, int target) {
    //     for(int i=0; i<nums.size();i++){
    //         for(int j = i+1; j < nums.size();j++){
    //             if(nums[i] +nums[j]== target){
    //                 return {i,j};
    //             }
    //         }
    //     }
    //     return {};
    // }

// better

vector<int> twoSum(vector<int>& nums, int target){
        map<int , int> mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int num =nums[i];
            int more = target -num;
            if(mpp.find(more)!= mpp.end()){
                return{mpp[more] , i};
            }
            mpp[num]=i;
        }    
         
         return{-1,-1};
  }
};
