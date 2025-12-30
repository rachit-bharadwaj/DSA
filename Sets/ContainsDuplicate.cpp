// Question: https://leetcode.com/problems/contains-duplicate/description/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> visited;

        for (int num : nums)
        {
            if (visited.find(num) != visited.end())
            {
                return true;
            }

            visited.insert(num);
        }

        return false;
    }
};