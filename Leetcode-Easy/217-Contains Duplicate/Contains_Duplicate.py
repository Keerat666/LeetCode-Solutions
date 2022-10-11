# https://leetcode.com/problems/contains-duplicate/
from typing import List
class Solution: #complexity O(nlogn) beacuse of the sorting and O(1) space complexity
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        for i in range(0,len(nums)-1):
                if(nums[i] == nums[i+1]):
                    return True
                else:
                    False

class Solution: # Better complexity O(1) and O(n) space complexity
    def containsDuplicate(self, nums: List[int]) -> bool:
        hashset = set ()
        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)
        return False

s = Solution()
print(s.containsDuplicate([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,15]))


        