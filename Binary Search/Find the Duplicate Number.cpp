// Question: https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();

        // -----brute force-----
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i] == nums[j] && i!=j) return nums[i];
        //     }
        // }

        // return -1;

        // -----two pointer/BS-----
        sort(nums.begin(), nums.end());
        int start = 0, end = 1;

        while (start < end) {
            if (nums[start] == nums[end])
                return nums[start];

            start++;
            end++;
        }

        return -1;
    }
};