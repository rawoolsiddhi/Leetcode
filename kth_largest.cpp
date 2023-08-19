/*Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      
       /* method 1*/

        // int n = size(nums);
        // sort(nums.begin(), nums.end());
        // return nums[n-k];
        

        /* method 2*/

        // priority_queue<int> pq(nums.begin(), nums.end());
        // int ans =0;
        // while(k--){
        //     ans=pq.top();
        //     pq.pop();
        // }
        // return ans;


        /*method 3*/
        priority_queue<int, vector<int>, greater<int>> pq;    // min_heap
        for(auto x: nums){           
            pq.push(x);
            if(pq.size() > k){
                pq.pop();
            }
        }

        return pq.top();
    }
};
