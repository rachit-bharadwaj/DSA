// Question: https://leetcode.com/problems/group-anagrams

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> um;

        for (auto i : strs)
        {
            string temp = i;
            sort(i.begin(), i.end());
            um[i].push_back(temp);
        }

        for (auto i : um)
        {
            vector<string> temp = i.second;
            res.push_back(temp);
        }

        return res;
    }
};