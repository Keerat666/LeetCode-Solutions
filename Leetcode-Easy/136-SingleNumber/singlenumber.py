class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans=0
        for i in nums:
            ans^=i
        return ans
