// Leetcode #9 - Palindrome Number 
// Difficulty - Easy

class Solution {
public:
    bool isPalindrome(int x) {
        long long rev_num = 0;
        int dup = x;
        while (x > 0){
            int last_digit = x % 10;
            rev_num = (rev_num * 10) + last_digit;
            x = x/10;
        }
        return rev_num == dup;
        
        
    }
};
