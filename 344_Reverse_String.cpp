// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.
// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

class Solution {
public:
    void reverseString(vector<char>& s) {
       int n = s.size();
       int l = 0, m = n - 1;
       
        while (l < m){
        
        int temp=s[l];
        s[l]=s[m];
        s[m]=temp;
        l++;
        m--;
       }
       
    }
    
};
