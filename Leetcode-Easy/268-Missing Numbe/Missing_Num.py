# https://leetcode.com/problems/missing-number/
from typing import List
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        result = 0
        n = len(nums)
        for i in range(len(nums)):
            result+= nums[i]
                
        return ((n*(n+1))//2) - result

s = Solution()
print(s.missingNumber([0,1,2,3,4,5,6,8,9,10]))