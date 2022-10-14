/*
 * @lc app=leetcode id=1920 lang=cpp
 *
 * [1920] Build Array from Permutation
 */

class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> rez;
        for (int i = 0; i < nums.size(); i++)
            rez.push_back(nums[nums[i]]);
        return rez;
    }
};