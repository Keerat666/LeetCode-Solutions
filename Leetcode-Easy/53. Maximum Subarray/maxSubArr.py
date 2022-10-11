# https://leetcode.com/problems/maximum-subarray/
from typing import List
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSubArr = nums[0]
        currentSum = 0
        for n in nums:
            if currentSum<0:
                currentSum = 0
            currentSum+=n
            maxSubArr = max(maxSubArr,currentSum)
        return maxSubArr
        

s = Solution()
print(s.maxSubArray([-2,1,-3,4,-1,2,1,-5,4]))