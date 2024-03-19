//  Question: https://leetcode.com/problems/reverse-string/

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int charSize = s.size();
        int start = 0, end = (charSize - 1);

        if (charSize >= 2)
        {
            while (start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
    }
};