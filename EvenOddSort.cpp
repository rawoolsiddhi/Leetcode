// You are given a 0-indexed integer array nums. Rearrange the values of nums according to the following rules:

// Sort the values at odd indices of nums in non-increasing order.
// For example, if nums = [4,1,2,3] before this step, it becomes [4,3,2,1] after. The values at odd indices 1 and 3 are sorted in non-increasing order.
// Sort the values at even indices of nums in non-decreasing order.
// For example, if nums = [4,1,2,3] before this step, it becomes [2,1,4,3] after. The values at even indices 0 and 2 are sorted in non-decreasing order.

// Input: nums = [4,1,2,3]
// Output: [2,3,4,1]

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd,even;
        int n=nums.size();
        for(int i =0; i< n; i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                 odd.push_back(nums[i]);
            }
            // even[i]= nums[2*i];
            // odd[i]=nums[2*i+1];
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
    
    int i=0,k=0, j=0; 
    while(i<n){
        if(k< even.size()){
        nums[i]=even[k];
        i++;
        k++;
        }
        if(j< odd.size()){
        nums[i]=odd[j];
        i++;
        j++;
        }
    }
    return nums;
    }

};
