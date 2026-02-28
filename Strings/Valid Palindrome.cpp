// Question: https://leetcode.com/problems/valid-palindrome

// Difficulty: Easy

class Solution {
public:
    bool isAlphaNumeric(char c) {
        if ((c >= '0' && c <= '9') || (tolower(c) >= 'a' && tolower(c) <= 'z'))
            return true;

        return false;
    }

    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            if (!isAlphaNumeric(s[start])) {
                start++;
                continue;
            }
            if (!isAlphaNumeric(s[end])) {
                end--;
                continue;
            }

            if (tolower(s[start]) != tolower(s[end]))
                return false;

            start++;
            end--;
        }

        return true;
    }
};