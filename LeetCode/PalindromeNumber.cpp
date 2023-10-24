class Solution {
public:
    int reverseInteger(int num) {
    long reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
    }

    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        }
        if(reverseInteger(x) == x && x>=0) {
            return true;
        }
        return false;
    }
};

// source: https://leetcode.com/problems/palindrome-number/submissions/
