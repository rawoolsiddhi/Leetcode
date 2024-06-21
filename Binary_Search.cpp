class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0, j = n-1;
        
        int mid = i + (j-i)/2;
       
        while (i <= j){
             
            if(nums[mid] == target){
                return mid;
            }

            if(target > nums[mid]){
                i = mid +1;
            }
            else{
                j = mid -1;
            }
          mid = i + (j - i) / 2;
        }

        return -1;
        
    }
};
