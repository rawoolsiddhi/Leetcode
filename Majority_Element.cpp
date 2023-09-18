// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Constraints:
// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
        int n= nums.size();
        // int count=0;
        // for(int j=0; j<n;j++){
        //     for(int i=j+1;i<n;i++){
        //        if( nums[j]==nums[i]){
        //            count++;
        //         }
        //     }
        //     if(count>=j/2){
        //         return nums[j];
        //     }
        //     else{
        //         count=0;
        //     }

        // }
        // return -1;

 //method2

    //    unordered_map<int, int> mpp;

    //     for(int i=0; i<n;i++){             //count in map
    //         mpp[nums[i]]++;
    //     }

    //     for(auto mp: mpp){                 //iterating mapp
    //         if(mp.second > n/2) {
    //              return mp.first;
    //         }
    //     }
    //     return -1;


//moore's voting algo
        
        int ct=0;
        int ele;
        for(int i=0;i<n;i++){
            if(ct==0){
                ct=1;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                ct++;
            }
            else{
                ct--;
            }
        }

        int c2;
        for(int i=0;i<n;i++){
            if(nums[i]==ele) c2++;

        }
        if(c2>n/2){
            return ele;
        }

        return -1;
    }
};
