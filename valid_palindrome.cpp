// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.
// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.

// Constraints:

// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.

class Solution {
public:

 // method 1
    bool isPalindrome(string s) {
        int n = s.size();

    int start=0;
    int end =n-1;
    while(start<=end){
        if(!isalnum(s[start])) {start++ ; continue; }
        if(!isalnum(s[end])) {end--; continue;}
        if(tolower(s[start])!=tolower(s[end])){
            return false;
        }
        else{
            start++;
            end--;
        }

    }
     return true;




   //method 2

// return ispalindromehelper(s,0,n-1);

       
    }

    
bool ispalindromehelper(string s,int start ,int end){
     if(start>=end) return true;
     // Skip non-alphanumeric characters from the start
    while (start < end && !isalnum(s[start])) {
        start++;
    }

    // Skip non-alphanumeric characters from the end
    while (start < end && !isalnum(s[end])) {
        end--;
    }

    // Compare characters ignoring case
     if(tolower(s[start])!=tolower(s[end]))  return false;
    
     return  ispalindromehelper(s,start+1,end-1);
}
};
