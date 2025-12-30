// Question: https://leetcode.com/problems/two-sum/description/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        map<int, int> hm;

        for (int i = 0; i < nums.size(); i++)
        {
            int num1 = nums[i];
            int num2 = target - num1;

            if (hm.find(num2) != hm.end())
            {
                return {hm[num2], i};
            }

            hm[num1] = i;
        }

        return {-1, -1};
    }
};