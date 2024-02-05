// Question: https://leetcode.com/problems/single-element-in-a-sorted-array/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = 1;
        int res;

        if(nums.size() == 1){
            res = nums[0];
        } 

        while(start < end){

            if(start == nums.size()-1) return nums[start];
            else if(nums[start] == nums[end]){ 
                start = start + 2;
                end = end + 2;
            }
            else return nums[start];
        }

        return res;
    }
};