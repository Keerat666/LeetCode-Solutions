class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        lastValidElement = 0
        for i in range(len(nums)):
            if (nums[i] != val):
                nums[lastValidElement] = nums[i]
                lastValidElement += 1
            i += 1
        return lastValidElement
