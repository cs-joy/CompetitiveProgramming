#include<iostream>

using namespace std;

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

int main() {
    int num;
    cin >> num;
    Solution solution;
    cout << solution.isPalindrome(num);

    return 0;
}

// source: https://leetcode.com/problems/palindrome-number/submissions/
