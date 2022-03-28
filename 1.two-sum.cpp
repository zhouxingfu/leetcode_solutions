/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */


// notes: 1. no more than one solution 2. each element will be just used once.
// If two restrictions above does not exist, what should we do?
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index(nums.size(), 0);
        iota(index.begin(), index.end(), 0);
        std::sort(index.begin(), index.end(), [&nums](int i1, int i2){return nums[i1] < nums[i2];});
        vector<int> result;
        for(int i = 0, j = index.size() - 1; i <j;)
        {
            if((nums[index[i]] + nums[index[j]]) == target)
            {
               result.push_back(index[i]);
               result.push_back(index[j]);
               break;
            }
            else if ((nums[index[i]] + nums[index[j]]) > target)
            {
                --j;
            }
            else 
            {
                ++i;
            }

        }
        return result; 
    }
};
// @lc code=end

